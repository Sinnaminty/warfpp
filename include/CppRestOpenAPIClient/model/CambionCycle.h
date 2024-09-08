/**
 * WarframeStat.us API
 * Simple API for data from the game Warframe. [Parser
 * Docs](https://wfcd.github.io/warframe-worldstate-parser/) [Items
 * Types](https://github.com/WFCD/warframe-items/blob/master/index.d.ts)
 *
 * The version of the OpenAPI document: 2.0.8
 * Contact: tobiah@protonmail.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.8.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CambionCycle.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CambionCycle_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CambionCycle_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class CambionCycle : public ModelBase {
public:
  CambionCycle();
  virtual ~CambionCycle();

  /////////////////////////////////////////////
  /// ModelBase overrides

  void validate() override;

  web::json::value toJson() const override;
  bool fromJson(const web::json::value &json) override;

  void toMultipart(std::shared_ptr<MultipartFormData> multipart,
                   const utility::string_t &namePrefix) const override;
  bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                     const utility::string_t &namePrefix) override;

  /////////////////////////////////////////////
  /// CambionCycle members

  /// <summary>
  ///
  /// </summary>
  utility::string_t getId() const;
  bool idIsSet() const;
  void unsetId();

  void setId(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getExpiry() const;
  bool expiryIsSet() const;
  void unsetExpiry();

  void setExpiry(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getActivation() const;
  bool activationIsSet() const;
  void unsetActivation();

  void setActivation(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getState() const;
  bool stateIsSet() const;
  void unsetState();

  void setState(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getActive() const;
  bool activeIsSet() const;
  void unsetActive();

  void setActive(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getTimeLeft() const;
  bool timeLeftIsSet() const;
  void unsetTimeLeft();

  void setTimeLeft(const utility::string_t &value);

protected:
  utility::string_t m_Id;
  bool m_IdIsSet;
  utility::string_t m_Expiry;
  bool m_ExpiryIsSet;
  utility::string_t m_Activation;
  bool m_ActivationIsSet;
  utility::string_t m_State;
  bool m_StateIsSet;
  utility::string_t m_Active;
  bool m_ActiveIsSet;
  utility::string_t m_TimeLeft;
  bool m_TimeLeftIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CambionCycle_H_ */
