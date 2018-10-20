{-# LANGUAGE
                DataKinds,
                KindSignatures,
                ForeignFunctionInterface
#-}
module Raaz.Verse.Sha256.C.Portable where
import Raaz.Core
import Foreign.Ptr
import Data.Word
foreign import ccall unsafe
    verse_sha256_c_portable :: Ptr (Ptr (Tuple 16 Word32))
                            -> Word64
                            -> Ptr (Tuple 8 Word32)
                            -> IO ()
