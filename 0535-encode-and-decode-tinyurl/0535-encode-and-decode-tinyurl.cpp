class Solution {
public:

    map<string,string> m;
    int i=0;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        m["http://tinyurl.com/"+to_string(i)]=longUrl;
        i++;
        return "http://tinyurl.com/"+to_string(i-1);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));