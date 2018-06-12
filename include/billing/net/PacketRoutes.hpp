#ifndef __BILLING_NET_PACKET_ROUTES_HPP__
#define __BILLING_NET_PACKET_ROUTES_HPP__

#include <unordered_map>
#include <functional>
#include <string>
#include <vector>

namespace net
{
  class PacketRoutes
  {
    public:
      using ResponseData = std::vector<char>;
      using Routers = std::unordered_map<std::string,
            std::function<ResponseData(const std::string&)>
            >;

    private:
      Routers m_routers;
      const std::string m_checkSumFirstStr;
      const std::string m_checkSumLastStr;

    private:
      PacketRoutes();

    public:
      ~PacketRoutes();

    public:
      static PacketRoutes& getInstance();
      const ResponseData operator[](const std::string& packetHexStr);

    protected:
      ResponseData onPingConnectionHandle();
      ResponseData onLoginRequestHandle(const std::string& packetHexStr);
  };
}

#endif

