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
 * Syndicate.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Syndicate_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Syndicate_H_

#include "CppRestOpenAPIClient/ModelBase.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Syndicate : public ModelBase {
public:
  Syndicate();
  virtual ~Syndicate();

  /////////////////////////////////////////////
  /// ModelBase overrides

  void validate() override;

  web::json::value toJson() const override;
  bool fromJson(const web::json::value &json) override;

  void toMultipart(std::shared_ptr<MultipartFormData> multipart,
                   const utility::string_t &namePrefix) const override;
  bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                     const utility::string_t &namePrefix) override;

  enum class eSyndicate {
    Syndicate_ARBITERS_OF_HEXIS,
    Syndicate_CEPHALON_SUDA,
    Syndicate_ASSASSINS,
    Syndicate_NIGHTWAVE,
    Syndicate_OSTRONS,
    Syndicate_VOX_SOLARIS,
    Syndicate_SOLARIS_UNITED,
    Syndicate_PERRIN_SEQUENCE,
    Syndicate_STEEL_MERIDIAN,
    Syndicate_RED_VEIL,
    Syndicate_NEW_LOKA,
  };

  eSyndicate getValue() const;
  void setValue(eSyndicate const value);

protected:
  eSyndicate m_value;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Syndicate_H_ */
