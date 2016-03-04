<?php
/**
 * @file
 * Class with
 */

use \Some\Client\Api\SomeDefaultApi;
/**
 * Class SomeApiWrapper.
 */
class SomeApiWrapper {
  protected $defaultApiClient;

  /**
   * Set up default host and affkey on object creation.
   */
  public function __construct() {
    $this->defaultApiClient = $this->getSpecificDefaultApi();
    $this->setDefaultAffkey($this);
    $this->setDefaultHost($this);
  }

  /**
   * Setting the default `affkey`. Using in default object instance creation.
   *
   * @return \Some\Client\Api\SomeDefaultApi $instance
   *   Returning SomeDefaultApi object which
   *   contains affkey in $SomeData array.
   */
  public function setDefaultAffkey() {
    $this->defaultApiClient->setSittingsData('affkey', SomeDefaultApi::DEFAULT_AFFKEY);
    return $this;
  }

  /**
   * Setting host which SomeApi will request.
   *
   * @return SomeApiWrapper $instance
   *   Returning SomeDefaultApi object which
   *   contains host in $SomeData array.
   */
  public function setDefaultHost() {
    $this->defaultApiClient->setSomeData(
      'host',
      variable_get('specific_api_host', SomeDefaultApi::DEFAULT_HOST)
    );
    return $this;
  }

  /**
   * Getting Attraction JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getAttractionContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->attractionEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Critic Review content JSON response.
   *
   * @param int $nid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getCriticReviewContent($nid) {
    $nid = $nid . '.json';
    $response = $this->defaultApiClient->criticReviewNidGet($nid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Customer Review content JSON response.
   *
   * @param int $nid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getCustomerReviewContent($nid) {
    $nid = $nid . '.json';
    $response = $this->defaultApiClient->customerReviewNidGet($nid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Event content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getEventCardsContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->eventEtidCardsGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Event content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getEventContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->eventEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting FAQ content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getFaqContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->faqEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Hall content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getHallContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->hallEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Merchandise content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getMerchandiseContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->merchandiseEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Music content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getMusicContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->musicEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting NewsArticle content JSON response.
   *
   * @param int $nid
   *    Required content nid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getNewsArticleContent($nid) {
    $nid = $nid . '.json';
    $response = $this->defaultApiClient->newsArticleNidGet($nid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Package content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getPackageContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->packageEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Restaurant content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getRestaurantContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->restaurantEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Shop content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getShopContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->shopEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Show content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getShowContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->showEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Staff Review content JSON response.
   *
   * @param int $nid
   *    Required content nid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getStaffReviewContent($nid) {
    $nid = $nid . '.json';
    $response = $this->defaultApiClient->staffReviewNidGet($nid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Talent content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getTalentContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->talentEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Getting Venue content JSON response.
   *
   * @param int $etid
   *    Required content ETid.
   *
   * @return mixed
   *    Returning response or FALSE if response is empty.
   */
  public function getVenueContent($etid) {
    $etid = $etid . '.json';
    $response = $this->defaultApiClient->venueEtidGet($etid);
    return !empty($response) ? $response : FALSE;
  }

  /**
   * Private function which returns SomeDefaultApi object.
   *
   * @return \Some\Client\Api\SomeDefaultApi
   *   Returns instance of SomeDefaultApi class.
   */
  private function getSomeDefaultApi() {
    $lib_path = libraries_get_path('SomeApiClient');
    include_once $lib_path . '/autoload.php';

    $default_api = new SomeDefaultApi(
      NULL,
      variable_get('Some_api_host', SomeDefaultApi::DEFAULT_HOST)
    );
    return $default_api;
  }

}
