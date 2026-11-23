class ProductOfNumbers {
public:
    vector<int> temp;

    ProductOfNumbers() {
    }

    void add(int num) {
        temp.push_back(num);
    }

    int getProduct(int k) {
        int pr = 1;

        int start = temp.size() - k;

        for(int i = start; i < temp.size(); i++) {
            if(temp[i] == 0)
                return 0;

            pr *= temp[i];
        }

        return pr;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */