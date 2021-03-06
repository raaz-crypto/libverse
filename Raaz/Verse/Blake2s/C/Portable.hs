{-# LANGUAGE DataKinds #-}
{-# LANGUAGE ForeignFunctionInterface #-}
module Raaz.Verse.Blake2s.C.Portable where
import Raaz.Core
foreign import ccall unsafe verse_blake2s_c_portable_iter
        :: Ptr (Tuple 16 (LE Word32))
        -> Word64
        -> Ptr Word32
        -> Ptr Word32
        -> Ptr (Tuple 8 Word32)
        -> IO ()
foreign import ccall unsafe verse_blake2s_c_portable_last
        :: Ptr (Tuple 16 (LE Word32))
        -> Word32
        -> Word32
        -> Word32
        -> Word32
        -> Word32
        -> Ptr (Tuple 8 Word32)
        -> IO ()
