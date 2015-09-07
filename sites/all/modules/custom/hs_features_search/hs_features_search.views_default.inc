<?php
/**
 * @file
 * hs_features_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hs_features_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cartes_hearthstone';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_index_hearthstone';
  $view->human_name = 'Cartes Hearthstone';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cartes Hearthstone';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Indexed Node: image */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'search_api_index_index_hearthstone';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Champ: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_index_hearthstone';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Sort criterion: Indexed Node: cost */
  $handler->display->display_options['sorts']['field_cost']['id'] = 'field_cost';
  $handler->display->display_options['sorts']['field_cost']['table'] = 'search_api_index_index_hearthstone';
  $handler->display->display_options['sorts']['field_cost']['field'] = 'field_cost';
  /* Sort criterion: Indexed Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_index_hearthstone';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Indexed Node: collectible */
  $handler->display->display_options['filters']['field_collectible']['id'] = 'field_collectible';
  $handler->display->display_options['filters']['field_collectible']['table'] = 'search_api_index_index_hearthstone';
  $handler->display->display_options['filters']['field_collectible']['field'] = 'field_collectible';
  $handler->display->display_options['filters']['field_collectible']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_collectible']['group'] = 1;
  /* Filter criterion: image: The image file. (indexed) */
  $handler->display->display_options['filters']['field_picture_file']['id'] = 'field_picture_file';
  $handler->display->display_options['filters']['field_picture_file']['table'] = 'search_api_index_index_hearthstone';
  $handler->display->display_options['filters']['field_picture_file']['field'] = 'field_picture_file';
  $handler->display->display_options['filters']['field_picture_file']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_picture_file']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'cartes-hearthstone';
  $translatables['cartes_hearthstone'] = array(
    t('Master'),
    t('Cartes Hearthstone'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Page'),
  );
  $export['cartes_hearthstone'] = $view;

  return $export;
}
