{-# LANGUAGE
                DataKinds,
                KindSignatures,
                ForeignFunctionInterface
#-}
module Raaz.Verse.Chacha20.C.Portable where
import Raaz.Core
foreign import ccall unsafe
    verse_chacha20_c_portable :: Ptr (Ptr (Tuple 16 Word32))
                              -> Word64
                              -> Ptr Word32
                              -> Ptr (Tuple 3 Word32)
                              -> Ptr (Tuple 8 Word32)
                              -> IO ()