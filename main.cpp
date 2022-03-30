#include <bits/stdc++.h>
#include "Post.cpp"
using namespace std;

int main() {
        vector<Post *> posts;
        posts.push_back(new Text("In bucuresti ca sa traiesc mai bine", 25, 3, "#bucuresti_sa_traiesti"));
        posts.push_back(new Image("film.img", 100, 15, "#spider_man"));
        posts.push_back(new Video("bunji_jumping.vd", 3000, 100, "#viata_extrema"));
        posts.push_back(new Text("Procesul este un rezultat mai frumos decat cel final", 150, 30, "#entrepreneurship"));
        posts.push_back(new Image("programator.img", 1000, 123, "#google"));
        posts.push_back(new Video("planche.vd", 300, 50, "#training"));
        posts.push_back(new Text("Cand stai sa te gandesti ca acum 2 ani m-am apucat de treaba", 1036, 234, "#process"));
        posts.push_back(new Image("wine.img", 1523, 345, "#cheers"));
        posts.push_back(new Video("insula_craciunului.vd", 5000, 539, "#hello_world"));

        for (Post *post : posts) {
                post->getPost();
                cout <<"\n";
                delete post;
        }

        
 
        return 0;
}
