-- Copyright (c) Dark.Hades
-- https://github.com/HadesD/TLBB.Billing

ALTER TABLE account ADD COLUMN is_online TINYINT(1) NOT NULL DEFAULT 0;
ALTER TABLE account ADD COLUMN is_lock TINYINT(1) NOT NULL DEFAULT 0;

