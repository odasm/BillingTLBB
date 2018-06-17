#ifndef __BILLING_NET_PACKET_HEX_DATA_HPP__
#define __BILLING_NET_PACKET_HEX_DATA_HPP__

#include "../Packet.hpp"
#include <string>

namespace net { namespace packet
{
  class HexData
  {
    public:
      using SizeType = unsigned short;

    private:
      std::string m_header;
      SizeType m_size;
      std::string m_type;
      std::string m_id;
      std::string m_body;
      std::string m_footer;

    public:
      HexData();
      HexData(
        const std::shared_ptr<Packet::Buffer> buffer, const std::size_t size
        );
      HexData(const std::string& hexDataStr);
      ~HexData();

    private:
      void init();

    public:
      const HexData& append(const std::string& hexBodyStr);

      SizeType getSize() const;

      const std::string& getType() const;
      void setType(const std::string& type);

      const std::string& getId() const;
      void setId(const std::string& id);

      const std::string& getBody() const;

      std::string toString() const;

    private:
      void updateSize();
  };
} }

#endif

