{-# LANGUAGE DataKinds #-}
{-# LANGUAGE ForeignFunctionInterface #-}
module Raaz.Verse.ChaCha20.C.Portable where
import Raaz.Core
foreign import ccall unsafe verse_chacha20_c_portable
        :: Ptr (Tuple 16 (LE Word32))
        -> Word64
        -> Ptr (Tuple 8 Word32)
        -> Ptr (Tuple 3 Word32)
        -> Ptr Word32
        -> IO ()
foreign import ccall unsafe verse_hchacha20_c_portable
        :: Ptr (Tuple 8 Word32)
        -> Word32
        -> Word32
        -> Word32
        -> Word32
        -> IO ()
foreign import ccall unsafe verse_chacha20csprg_c_portable
        :: Ptr (Tuple 16 Word32)
        -> Word64
        -> Ptr (Tuple 8 Word32)
        -> Ptr (Tuple 3 Word32)
        -> Ptr Word32
        -> IO ()
