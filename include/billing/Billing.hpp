#ifndef __BILLING_BILLING_HPP__
#define __BILLING_BILLING_HPP__

namespace net
{
  class BillingSocket;
}

class Billing final
{
  private:
    net::BillingSocket* m_socket;

  public:
    Billing();
    ~Billing();

  public:
    void start();
    void restart();
    void stop();

#if defined(__BILLING_WITH_AFTER_START__)
  private:
    void afterStart();
#endif
};

#endif

