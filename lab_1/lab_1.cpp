void max_or_min(Number *n,bool c){
    if(c) {
        n->m = n->a[0];
        for(int i = 1; i < 7; i++) {
            if(n->a[i] > n->m) {
                n->m = n->a[i];
            }
        }
    } else {
        n->m = n->a[0];
        for(int i = 1; i < 7; i++) {
            if(n->a[i] < n->m) {
                n->m = n->a[i];
            }
        }
    }
}
