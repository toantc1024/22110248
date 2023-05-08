#include <bits/stdc++.h>
#define txt vector<string>
using namespace std;

void init(txt &text);
void process(txt &text);
void output(txt text);

int main() {
    txt text;
	init(text);
	process(text);
	output(text);
	return 0;
}

void init(txt &text) {
	string words;
	string word = "";
	getline(cin, words);
	for(int i = 0; i < words.size(); i++) {
		words[i] = toupper(words[i]);
		if(words[i] == ' ') {
			text.push_back(word);
			word = "";
			continue;
		}
		word = word + words[i];
	}
	text.push_back(word);
}

void process(txt &text) {
	for(int i = 0; i < text.size(); i++) {
		reverse(text[i].begin(), text[i].end());
	}
}

void output(txt text) {
	for(int i = 0; i < text.size(); i++) {
		cout<<text[i]<<" ";
	}
}


