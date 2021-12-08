struct fraction{
    ll p,q;
    fraction(ll P=0,ll Q=1):p(P),q(Q){}
    bool operator<(const fraction &other)const{
        return p*other.q<q*other.p;
    }
    bool operator<=(const fraction &other)const{
        return p*other.q<=q*other.p;
    }
};