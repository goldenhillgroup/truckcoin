// Copyright (c) 2014, Truckcoin Project
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// Parts of this file are originally copyright (c) 2012-2013 The Cryptonote developers

#pragma once

#include "checkpoints.h"
#include "misc_log_ex.h"

#define ADD_CHECKPOINT(h, hash)  CHECK_AND_ASSERT(checkpoints.add_checkpoint(h,  hash), false);

namespace cryptonote {
  inline bool create_checkpoints(cryptonote::checkpoints& checkpoints)
  {     
    ADD_CHECKPOINT(0,      "c4890ac26e2806f95859c7725d66a248643fbc6b8fefcb5b8f408c24aa3c6f56");
    ADD_CHECKPOINT(1,      "a4802b045cf14805f8d0fec30da488858f1fd7004b034baefb12ad357051b95e");
    ADD_CHECKPOINT(10,     "54435e109713b80d8d73574a3ff85cdbe8a08e95f55cbb9a70aad6a8106e1bef");
    ADD_CHECKPOINT(100,    "38a9d2d7f31242195c493ec1a86f9de22c8dbf3cc068f99ab6150ee1e80cfdb1");
    ADD_CHECKPOINT(200,    "e3e9b22000c51b47c03eb6cbd68bee0df604ccd133a06121f60cb3986feacf35");
    ADD_CHECKPOINT(300,    "416b26ff6075e966368a141635cb60119a8119ee13f71d71c1a1eaf92cdebb41");
    ADD_CHECKPOINT(400,    "2c6872f4bf33d891030480ab57fd0c75fbf16f7b4bfdac726a1fd0647b463704");
    ADD_CHECKPOINT(500,    "0ed000275cadb8a185e0c3232a28e76024e42428e5d1f7f8e38baa302ace5e23");
    ADD_CHECKPOINT(1000,   "cc57c03d7a3440bfa2ba372002cab96b54fe4a9b4d76c95ff017d07c831212f2");
    ADD_CHECKPOINT(2000,   "2965c06515a66a5e325a8f29a2681b1ad03086ff5a43856494343d54f4f2a571");
    ADD_CHECKPOINT(3000,   "cd5f4e1bb1497cb8feaeeaeac6731f790c6f7a51cd8cff07f86e49c29caa288f");
    ADD_CHECKPOINT(6000,   "8f00534dc5ccfc5f1b0ada06c27f0104e56931fb7058966e82f62680e41a2dd7");
    ADD_CHECKPOINT(85000,  "47785d3a7249fc17949649ae72b8f6e6d0de355a1a3428d2a103737d234dd848");
    return true;
  }
}
