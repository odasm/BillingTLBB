#include <string>

class Config final
{
  public:
    struct Data
    {
      Data(const std::string& filename);
      std::string ip;
      short port;
    };

  private:
    std::string m_configFile;
    Data* m_data;

  private:
    Config();
    ~Config();

  public:
    Config& getInstance();
    const Data* getData() const;
};

