<?php
/**
 * @file
 * hs_features_model.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hs_features_model_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_pages';
  $context->description = '';
  $context->tag = 'Hearthstone';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-hearthstone' => array(
          'module' => 'menu',
          'delta' => 'menu-hearthstone',
          'region' => 'sidebar_first',
          'weight' => '-17',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_first',
          'weight' => '17',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_second',
          'weight' => '17',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hearthstone');
  $export['all_pages'] = $context;

  return $export;
}
