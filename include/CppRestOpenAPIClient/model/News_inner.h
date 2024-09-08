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
 * News_inner.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_News_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_News_inner_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/News_inner_translations.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class News_inner_translations;

/// <summary>
///
/// </summary>
class News_inner : public ModelBase {
public:
  News_inner();
  virtual ~News_inner();

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
  /// News_inner members

  /// <summary>
  ///
  /// </summary>
  utility::string_t getDate() const;
  bool dateIsSet() const;
  void unsetdate();

  void setDate(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getImageLink() const;
  bool imageLinkIsSet() const;
  void unsetImageLink();

  void setImageLink(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getEta() const;
  bool etaIsSet() const;
  void unsetEta();

  void setEta(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  bool isPrimeAccess() const;
  bool primeAccessIsSet() const;
  void unsetPrimeAccess();

  void setPrimeAccess(bool value);

  /// <summary>
  ///
  /// </summary>
  bool isStream() const;
  bool streamIsSet() const;
  void unsetStream();

  void setStream(bool value);

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<News_inner_translations> getTranslations() const;
  bool translationsIsSet() const;
  void unsetTranslations();

  void setTranslations(const std::shared_ptr<News_inner_translations> &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getLink() const;
  bool linkIsSet() const;
  void unsetLink();

  void setLink(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  bool isUpdate() const;
  bool updateIsSet() const;
  void unsetUpdate();

  void setUpdate(bool value);

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
  utility::string_t getAsString() const;
  bool asStringIsSet() const;
  void unsetAsString();

  void setAsString(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getMessage() const;
  bool messageIsSet() const;
  void unsetMessage();

  void setMessage(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  bool isPriority() const;
  bool priorityIsSet() const;
  void unsetPriority();

  void setPriority(bool value);

protected:
  utility::string_t m_date;
  bool m_dateIsSet;
  utility::string_t m_ImageLink;
  bool m_ImageLinkIsSet;
  utility::string_t m_Eta;
  bool m_EtaIsSet;
  bool m_PrimeAccess;
  bool m_PrimeAccessIsSet;
  bool m_Stream;
  bool m_StreamIsSet;
  std::shared_ptr<News_inner_translations> m_Translations;
  bool m_TranslationsIsSet;
  utility::string_t m_Link;
  bool m_LinkIsSet;
  bool m_Update;
  bool m_UpdateIsSet;
  utility::string_t m_Id;
  bool m_IdIsSet;
  utility::string_t m_AsString;
  bool m_AsStringIsSet;
  utility::string_t m_Message;
  bool m_MessageIsSet;
  bool m_Priority;
  bool m_PriorityIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_News_inner_H_ */
