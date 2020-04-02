{-# LANGUAGE DataKinds #-}
{-# LANGUAGE ForeignFunctionInterface #-}
module Raaz.Verse.Blake2b.C.Portable where
import Raaz.Core
foreign import ccall unsafe verse_blake2b_c_portable_iter
        :: Ptr (Tuple 16 (LE Word64))
        -> Word64
        -> Ptr Word64
        -> Ptr Word64
        -> Ptr (Tuple 8 Word64)
        -> IO ()
foreign import ccall unsafe verse_blake2b_c_portable_last
        :: Ptr (Tuple 16 (LE Word64))
        -> Word64
        -> Word64
        -> Word64
        -> Word64
        -> Word64
        -> Ptr (Tuple 8 Word64)
        -> IO ()
