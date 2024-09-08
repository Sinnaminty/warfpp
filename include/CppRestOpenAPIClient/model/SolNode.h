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
 * SolNode.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SolNode_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SolNode_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/SolNode_SolKey.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class SolNode_SolKey;

/// <summary>
///
/// </summary>
class SolNode : public ModelBase {
public:
  SolNode();
  virtual ~SolNode();

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
  /// SolNode members

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<SolNode_SolKey> getSolKey() const;
  bool solKeyIsSet() const;
  void unsetSolKey();

  void setSolKey(const std::shared_ptr<SolNode_SolKey> &value);

protected:
  std::shared_ptr<SolNode_SolKey> m_SolKey;
  bool m_SolKeyIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SolNode_H_ */
