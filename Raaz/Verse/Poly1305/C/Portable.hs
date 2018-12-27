{-# LANGUAGE
                DataKinds,
                KindSignatures,
                ForeignFunctionInterface
#-}
module Raaz.Verse.Poly1305.C.Portable where
import Raaz.Core
import Foreign.Ptr
import Data.Word
foreign import ccall unsafe
    verse_poly1305_c_portable_incremental :: Ptr (Tuple 2 Word64)
                                          -> Word64
                                          -> Ptr (Tuple 5 Word64)
                                          -> Ptr (Tuple 4 Word64)
                                          -> IO ()
foreign import ccall unsafe
    verse_poly1305_c_portable_blockmac :: Ptr (Tuple 2 Word64)
                                       -> Word64
                                       -> Ptr (Tuple 5 Word64)
                                       -> Ptr (Tuple 4 Word64)
                                       -> Ptr (Tuple 4 Word64)
                                       -> IO ()
foreign import ccall unsafe
    verse_poly1305_c_portable_partialmac :: Ptr (Tuple 2 Word64)
                                         -> Ptr (Tuple 5 Word64)
                                         -> Ptr (Tuple 4 Word64)
                                         -> Ptr (Tuple 4 Word64)
                                         -> IO ()
foreign import ccall unsafe
    verse_poly1305_c_portable_clamp :: Ptr (Tuple 2 Word64)
                                    -> Word64
                                    -> IO ()
