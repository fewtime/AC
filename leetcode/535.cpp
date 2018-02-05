class Solution {
public:

  vector<string> url;

  // Encodes a URL to a shortened URL.
  string encode(string longUrl) {
      url.push_back(longUrl);
      return "http://tinyurl.com/" + to_string(url.size() - 1);
  }

  // Decodes a shortened URL to its original URL.
  string decode(string shortUrl) {
      auto pos = shortUrl.find_last_of("/");
      return url[stoi(shortUrl.substr(pos + 1))];
  }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
