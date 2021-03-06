{-# LANGUAGE DataKinds #-}
{-# LANGUAGE ForeignFunctionInterface #-}
module Raaz.Verse.Sha256.C.Portable where
import Raaz.Core
foreign import ccall unsafe verse_sha256_c_portable
        :: Ptr (Tuple 16 (BE Word32))
        -> Word64
        -> Ptr (Tuple 8 Word32)
        -> IO ()
