<?php
/**
 * @file
 * hs_features_model.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hs_features_model_taxonomy_default_vocabularies() {
  return array(
    'faction' => array(
      'name' => 'faction',
      'machine_name' => 'faction',
      'description' => 'The faction of the card. Example values: Alliance, Horde, Neutral',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'mechanics' => array(
      'name' => 'mechanics',
      'machine_name' => 'mechanics',
      'description' => 'The mechanics of the card. Example values: Windfury, Combo, Secret, Battlecry, Deathrattle, Taunt',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'playerclass' => array(
      'name' => 'playerClass',
      'machine_name' => 'playerclass',
      'description' => 'The player class this card belongs to. Example values: Druid, Hunter, Mage, Paladin',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'race' => array(
      'name' => 'race',
      'machine_name' => 'race',
      'description' => 'The race of the card. Example values: Murloc, Demon, Beast, Totem, Pirate, Dragon',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'rarity' => array(
      'name' => 'rarity',
      'machine_name' => 'rarity',
      'description' => 'The rarity of the card. Example values: Free, Common, Rare, Epic, Legendary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'set' => array(
      'name' => 'set',
      'machine_name' => 'set',
      'description' => 'The set which the card come from. Example values: Basic, Classic, Curse of Naxxramas',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'type' => array(
      'name' => 'type',
      'machine_name' => 'type',
      'description' => 'The card type. Example values: Minion, Spell, Weapon, Hero, Hero Power, Enchantment',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
