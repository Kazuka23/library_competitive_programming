#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int M = 100000;
const int SH = 8;

ll diff_[M + 2], blk[(M + 2 >> SH) + 2];

inline void upd(int pos, ll v) {
    diff_[pos] += v;
    blk[pos >> SH] += v;
}

inline ll query(int s) {
    int b = s >> SH;
    ll r = 0;
    for (int i = 0; i < b; i++) r += blk[i];
    for (int i = b << SH; i <= s; i++) r += diff_[i];
    return r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> s(q), head(n + 1, -1), nxt(2 * q), qid(2 * q), sg(2 * q);
    int cnt = 0;
    for (int j = 0; j < q; j++) {
        int l, r;
        cin >> l >> r >> s[j];
        qid[cnt] = j; sg[cnt] = 1; nxt[cnt] = head[r]; head[r] = cnt++;
        if (l > 1) {
            qid[cnt] = j; sg[cnt] = -1; nxt[cnt] = head[l - 1]; head[l - 1] = cnt++;
        }
    }

    vector<ll> ans(q, 0);
    for (int i = 1; i <= n; i++) {
        int x = a[i];
        ll prev = 0;
        for (int t = 1; t <= x; ) {
            int v = x / t;
            int hi = x / v;
            upd(t, v - prev);
            prev = v;
            t = hi + 1;
        }
        upd(x + 1, -prev);

        for (int e = head[i]; e != -1; e = nxt[e]) {
            ans[qid[e]] += sg[e] * query(s[qid[e]]);
        }
    }

    for (int j = 0; j < q; j++) cout << ans[j] << "\n";
    return 0;
}