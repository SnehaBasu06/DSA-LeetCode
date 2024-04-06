class Solution {
public:
    vector<int> getElements(vector<int>& arr){
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int> elements;
        int i=0;
        int el=arr[0];
        elements.push_back(el);
        while(i<n){
            
            if(arr[i]!=el){
                el=arr[i];
                elements.push_back(el);
                

            }
            i++;
        }
        return elements;
    }
    int Occurences(vector<int>& arr,int k){
        int occur=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==k){
               occur++;
            }
        }
    return occur;
    }

    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> elem = getElements(arr);
        int m=elem.size();
        int o[m];
        for(int i=0;i<m;i++){
            int key=elem[i];
            o[i]=Occurences(arr,key);
        }

        sort(o,o+m);
        for(int i=0;i<m-1;i++){
            if(o[i]==o[i+1]){
                return false;
            }
        }
        return true;

    }
};
