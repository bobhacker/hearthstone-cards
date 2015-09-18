<?php
/**
 * @file
 * hs_features_model.features.inc
 */

/**
 * Implements hook_node_info().
 */
function hs_features_model_node_info() {
  $items = array(
    'card' => array(
      'name' => t('Card'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'card_feed' => array(
      'name' => t('Card feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
