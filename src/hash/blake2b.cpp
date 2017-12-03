//
// libsse_crypto - An abstraction layer for high level cryptographic features.
// Copyright (C) 2015-2017 Raphael Bost
//
// This file is part of libsse_crypto.
//
// libsse_crypto is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// libsse_crypto is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with libsse_crypto.  If not, see <http://www.gnu.org/licenses/>.
//

#include "blake2b.hpp"

#include <sodium/crypto_generichash_blake2b.h>

#include <cstdint>

using namespace std;



namespace sse
{
	
namespace crypto
{

namespace hash
{
	
void blake2b::hash(const unsigned char *in, const size_t len, unsigned char *digest)
{
    crypto_generichash_blake2b(digest, kDigestSize, in, len, nullptr, 0);
}

}
}
}