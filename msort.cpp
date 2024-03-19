#include <iostream>
void merge2SS(double* a1, double* a2,
            long l1, long l2,
            double* aM){
long i1=0; long i2=0; long iM=0;
while((i1<l2) || (i2<l2)){
    if(i1>=l1){
        aM[iM] = a2[i2]; ++i2;
    }
    else{
        if(i2>=l2){
            aM[iM] = a1[i1], ++i1; 
        }
        else{
            if(a1[i1]<a2[i2]){
                aM[iM]=a1[i1]; ++i1;
            }
            else{
                aM[iM] = a2[i2]; ++i2;
            }
        }
    }
    ++iM;
}
}

double* readArray(long len){
    double* a=new double[len];
    for(long i=0; i<len; ++i){std::cin>>a[i];}
    return a;
}

void testMerge(){
    double* a1, *a2, *aM;
    long l1, l2;
    std::cin>>l1>>l2;
    a1=readArray(l1); a2=readArray(l2);
    aM=new double[l1+l2];
    merge2SS(a1, a2, l1, l2, aM);
    for(long i=0; i<l1+l2; ++i){
        std::cout<<aM[i]<<" ";
    }
    std::cout<<"\n";
    delete[] a1; delete[] a2; delete[] aM;
}

int main(){
    testMerge();
    return 0;
}