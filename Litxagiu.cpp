#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	FILE *fp=NULL;
    fp=fopen("Litxagiu.txt","w");
    int choice,i;
    double t,k,pha1,pha2,tung[2001],hoanh[2001];
    cout<<"Nhap ti le tan so cua hai tin hieu f1/f2: "; cin>>k; cout<<endl;
	cout<<"Chon dang 0.sin hoac 1.cos cho tin hieu thu nhat: "; cin>>choice;
	if (choice==0){
		cout<<"Tin hieu thu nhat co dang : x(t)=sin(2*pi*f1*t + pha1) "<<endl<<"Nhap pha ban dau tin hieu thu nhat: ";cin>>pha1;cout<<endl;
		for(i=0;t<=2*3.1415;t=t+3.1415/1000){
			hoanh[i] = sin(2*3.1415*k*t+pha1);
			i++;
		}
	}
		else {
			cout<<"Tin hieu thu nhat co dang : x(t)=cos(2*pi*f1*t + pha1) "<<endl<<"Nhap pha ban dau tin hieu thu nhat: ";cin>>pha1;
				for(i=0;t<=2*3.1415;t=t+3.1415/1000){
					hoanh[i] = cos(2*3.1415*k*t+pha1);
					i++;
				}
		}
	t=0;i=0;
	cout<<"Chon dang 0.sin hoac 1.cos cho tin hieu thu hai: "; cin>>choice;
	if (choice==0){
		cout<<"Tin hieu thu hai co dang : y(t)=sin(2*pi*f1*t + pha1) "<<endl<<"Nhap pha ban dau tin hieu thu hai: ";cin>>pha2;cout<<endl;
		for(i=0;t<=2*3.1415;t=t+3.1415/1000){
			tung[i] = sin(2*3.1415*t+pha2);
			i++;
		}
	}
		else {
			cout<<"Tin hieu thu hai co dang : y(t)=cos(2*pi*f1*t + pha1) "<<endl<<"Nhap pha ban dau tin hieu thu hai: ";cin>>pha2;
				for(i=0;t<=2*3.1415;t=t+3.1415/1000){
					tung[i] = cos(2*3.1415*t+pha2);
					i++;
				}
		}
	for(int i=0;i<=2000;i++) fprintf(fp,"%lf\t %lf\n",hoanh[i],tung[i]);
}
