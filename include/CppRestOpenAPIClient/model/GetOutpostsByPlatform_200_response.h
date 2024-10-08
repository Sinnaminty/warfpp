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
 * GetOutpostsByPlatform_200_response.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_GetOutpostsByPlatform_200_response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_GetOutpostsByPlatform_200_response_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/GetOutpostsByPlatform_200_response_previous.h"
#include "CppRestOpenAPIClient/model/Mission.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Mission;
class GetOutpostsByPlatform_200_response_previous;

/// <summary>
///
/// </summary>
class GetOutpostsByPlatform_200_response : public ModelBase {
public:
  GetOutpostsByPlatform_200_response();
  virtual ~GetOutpostsByPlatform_200_response();

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
  /// GetOutpostsByPlatform_200_response members

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<Mission> getMission() const;
  bool missionIsSet() const;
  void unsetMission();

  void setMission(const std::shared_ptr<Mission> &value);

  /// <summary>
  /// Whether the outpost is active
  /// </summary>
  bool isActive() const;
  bool activeIsSet() const;
  void unsetActive();

  void setActive(bool value);

  /// <summary>
  /// Identifier for the mission node with active indicator
  /// </summary>
  utility::string_t getId() const;
  bool idIsSet() const;
  void unsetId();

  void setId(const utility::string_t &value);

  /// <summary>
  /// When the mission became or becomes active
  /// </summary>
  utility::datetime getActivation() const;
  bool activationIsSet() const;
  void unsetActivation();

  void setActivation(const utility::datetime &value);

  /// <summary>
  /// When the mission became or becomes inactive
  /// </summary>
  utility::datetime getExpiry() const;
  bool expiryIsSet() const;
  void unsetExpiry();

  void setExpiry(const utility::datetime &value);

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<GetOutpostsByPlatform_200_response_previous>
  getPrevious() const;
  bool previousIsSet() const;
  void unsetPrevious();

  void
  setPrevious(const std::shared_ptr<GetOutpostsByPlatform_200_response_previous>
                  &value);

protected:
  std::shared_ptr<Mission> m_Mission;
  bool m_MissionIsSet;
  bool m_Active;
  bool m_ActiveIsSet;
  utility::string_t m_Id;
  bool m_IdIsSet;
  utility::datetime m_Activation;
  bool m_ActivationIsSet;
  utility::datetime m_Expiry;
  bool m_ExpiryIsSet;
  std::shared_ptr<GetOutpostsByPlatform_200_response_previous> m_Previous;
  bool m_PreviousIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_GetOutpostsByPlatform_200_response_H_  \
        */
