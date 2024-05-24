class MergeSort{
  public:
        void mergeSort(vector<int>& nums,int start, int end){
          if(start>end){
            int mid=(start+end)/2;
            mergeSort(data,start,mid);
            mergeSort(data,mid+1,end);
            merge(data,start,mid,end);

          }
        }

        void merge(vector<int>& nums,int start,int mid, int end){
          int temp[end-start+1];
          int i=start;
          int j=mid+1;
          int k=0;
          //while both the sub-arrays have values then try to merge them in sorted order
          while(i<=mid && j<=end){
            if(data[i]<=data[j]){
              temp[k]=data[i];
              i++;
              k++;
            }else{
              temp[k]=data[j];
              j++;
              k++;
              //its same as 
              // temp[k++]=data[j++];
            }
            // k++;
          }
          while(i<=mid){
            temp[k++]=data[i++];
          }
          while(j<=end){
            temp[k++]=data[j++];
          }

          for(i=start;i<=end;i++){
            data[i]=temp[i-start];
          }

        }
};