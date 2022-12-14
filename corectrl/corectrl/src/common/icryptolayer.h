// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright 2019 Juan Palacios <jpalaciosdev@gmail.com>

#pragma once

#include <QByteArray>

class ICryptoLayer
{
 public:
  /// Initialization.
  virtual void init() = 0;

  /// @return subject public key.
  virtual QByteArray publicKey() = 0;

  /// Set the key that will be used in public key operations (as verify).
  /// This key is generated by other subject.
  virtual void usePublicKey(QByteArray const &publicKey) = 0;

  /// Compute and validates the data signature against the provided signature.
  virtual bool verify(QByteArray const &data, QByteArray const &signature) = 0;

  /// Generates the signature of the data.
  virtual QByteArray signature(QByteArray const &data) = 0;

  virtual ~ICryptoLayer() = default;
};
