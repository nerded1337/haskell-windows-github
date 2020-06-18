{-# LANGUAGE ForeignFunctionInterface #-}

module Lib where

import Foreign
import Foreign.C.Types

import Control.Concurrent

foreign import ccall safe "haskell.h run" c_run :: IO ()

someFunc :: IO ()
someFunc = c_run *> threadDelay (12 * 1000000)