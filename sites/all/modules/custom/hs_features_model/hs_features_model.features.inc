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
    'carte' => array(
      'name' => t('Carte'),
      'base' => 'node_content',
      'description' => t('Carte Hearthstone (héro, sort, serviteur, etc.)'),
      'has_title' => '1',
      'title_label' => t('name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
