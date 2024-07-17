#include <iostream>
#include <string>
#include <list>
using namespace std;
class youtubechannels{
	public:
	string name;
	string ownername;
	int subscribers;
	list<string> publishedvideotitles;
	
};
int main(){
	youtubechannels ytchannel;
	ytchannel.name="chaos studio";
	ytchannel.ownername="Farzan ";
	ytchannel.subscribers=30000;
	ytchannel.publishedvideotitles = {"tum mile","32 bore","tauba tauba "};
	
	
	cout<<" NAME       :"<<ytchannel.name<<endl;
	cout<<" OWNER NAME :"<<ytchannel.ownername<<endl;
	cout<<" SUBSCRIBERS :"<<ytchannel.subscribers<<endl;
	cout<<" VIDEOS ";
	for(string videotitle: ytchannel.publishedvideotitles){
		cout<<videotitle<<endl;
	}	
	return 0;
}
