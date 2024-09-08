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
 * RewardType.h
 *
 * One of the reward types
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RewardType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RewardType_H_

#include "CppRestOpenAPIClient/ModelBase.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class RewardType : public ModelBase {
public:
  RewardType();
  virtual ~RewardType();

  /////////////////////////////////////////////
  /// ModelBase overrides

  void validate() override;

  web::json::value toJson() const override;
  bool fromJson(const web::json::value &json) override;

  void toMultipart(std::shared_ptr<MultipartFormData> multipart,
                   const utility::string_t &namePrefix) const override;
  bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                     const utility::string_t &namePrefix) override;

  enum class eRewardType {
    RewardType_VAUBAN,
    RewardType_VANDAL,
    RewardType_WRAITH,
    RewardType_SKIN,
    RewardType_HELMET,
    RewardType_NITAIN,
    RewardType_MUTALIST,
    RewardType_WEAPON,
    RewardType_FIELDRON,
    RewardType_DETONITE,
    RewardType_MUTAGEN,
    RewardType_AURA,
    RewardType_NEURALSENSORS,
    RewardType_OROKINCELL,
    RewardType_ALLOYPLATE,
    RewardType_CIRCUITS,
    RewardType_CONTROLMODULE,
    RewardType_FERRITE,
    RewardType_GALLIUM,
    RewardType_MORPHICS,
    RewardType_NANOSPORES,
    RewardType_OXIUM,
    RewardType_RUBEDO,
    RewardType_SALVAGE,
    RewardType_PLASTIDS,
    RewardType_POLYMERBUNDLE,
    RewardType_ARGONCRYSTAL,
    RewardType_CRYOTIC,
    RewardType_TELLURIUM,
    RewardType_NEURODES,
    RewardType_NIGHTMARE,
    RewardType_ENDO,
    RewardType_REACTOR,
    RewardType_CATALYST,
    RewardType_FORMA,
    RewardType_SYNTHULA,
    RewardType_EXILUS,
    RewardType_RIVEN,
    RewardType_KAVATGENE,
    RewardType_KUBROWEGG,
    RewardType_TRACES,
    RewardType_OTHER,
    RewardType_CREDITS,
  };

  eRewardType getValue() const;
  void setValue(eRewardType const value);

protected:
  eRewardType m_value;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RewardType_H_ */
