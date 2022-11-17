{-# LANGUAGE DataKinds #-}
{-# LANGUAGE ForeignFunctionInterface #-}
module Raaz.Verse.Curve25519.C.Portable where
import Raaz.Core
foreign import ccall unsafe verse_curve25519_c_portable_clamp
        :: Ptr (Tuple 4 (LE Word64))
        -> Word64
        -> IO ()
