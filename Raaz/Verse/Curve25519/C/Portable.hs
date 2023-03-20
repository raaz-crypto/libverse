{-# LANGUAGE DataKinds #-}
{-# LANGUAGE ForeignFunctionInterface #-}
module Raaz.Verse.Curve25519.C.Portable where
import Raaz.Core
foreign import ccall unsafe verse_curve25519_c_portable_clamp
        :: Ptr (Tuple 4 Word64)
        -> Word64
        -> IO ()
foreign import ccall unsafe verse_x25519_c_portable
        :: Ptr (Tuple 4 Word64)
        -> Ptr (Tuple 4 Word64)
        -> IO ()
