<?php
/**
 * @file
 * schemax_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function schemax_news_node_info() {
  $items = array(
    'schemax_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News that can be sent to one or more recipients'),
      'has_title' => '1',
      'title_label' => t('Subject'),
      'help' => '',
    ),
  );
  return $items;
}
