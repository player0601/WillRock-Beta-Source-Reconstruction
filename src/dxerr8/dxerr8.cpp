
/* from: dxerr8:dxerr8.cpp
   addr: 0058F9B0 */

char * DXGetErrorString8A_4(int param_1)

{
  if (param_1 < -0x7789feb0) {
    if (param_1 == -0x7789feb1) {
      return "DDERR_NOVSYNCHW";
    }
    if (param_1 < -0x7ff8fb7e) {
      if (param_1 == -0x7ff8fb7f) {
        return "DIERR_BETADIRECTINPUTVERSION";
      }
      if (param_1 < -0x7ffbfdb7) {
        if (param_1 == -0x7ffbfdb8) {
          return "VFW_E_INVALID_MEDIA_TYPE";
        }
        if (param_1 < -0x7ffbfde5) {
          if (param_1 == -0x7ffbfde6) {
            return "VFW_E_NO_COLOR_KEY_SET";
          }
          if (param_1 < -0x7ffbfdf8) {
            if (param_1 == -0x7ffbfdf9) {
              return "DIERR_NOTBUFFERED & VFW_E_NO_ACCEPTABLE_TYPES";
            }
            if (param_1 < -0x7ffbfe0f) {
              if (param_1 == -0x7ffbfe10) {
                return "CO_E_NOTINITIALIZED";
              }
              if (param_1 < -0x7fffbffb) {
                if (param_1 == -0x7fffbffc) {
                  return "E_ABORT";
                }
                if (param_1 == -0x7ffffff6) {
                  return "E_PENDING";
                }
                if (param_1 == -0x7fffbfff) {
                  return "E_NOTIMPL";
                }
                if (param_1 == -0x7fffbffe) {
                  return "E_NOINTERFACE";
                }
                if (param_1 == -0x7fffbffd) {
                  return "E_POINTER";
                }
              }
              else {
                if (param_1 == -0x7fffbffb) {
                  return "E_FAIL";
                }
                if (param_1 == -0x7fff0001) {
                  return "E_UNEXPECTED";
                }
                if (param_1 == -0x7ffbfef0) {
                  return "CLASS_E_NOAGGREGATION";
                }
                if (param_1 == -0x7ffbfeac) {
                  return "REGDB_E_CLASSNOTREG";
                }
              }
            }
            else if (param_1 < -0x7ffbfdfc) {
              if (param_1 == -0x7ffbfdfd) {
                return "DIERR_NOTDOWNLOADED & VFW_E_ENUM_OUT_OF_SYNC & DMO_E_TYPE_NOT_SET";
              }
              if (param_1 == -0x7ffbfe0f) {
                return "CO_E_ALREADYINITIALIZED";
              }
              if (param_1 == -0x7ffbfe00) {
                return "DIERR_INSUFFICIENTPRIVS & VFW_E_INVALIDMEDIATYPE";
              }
              if (param_1 == -0x7ffbfdff) {
                return "DIERR_DEVICEFULL & VFW_E_INVALIDSUBTYPE & DMO_E_INVALIDSTREAMINDEX";
              }
              if (param_1 == -0x7ffbfdfe) {
                return "DIERR_MOREDATA & VFW_E_NEED_OWNER & DMO_E_INVALIDTYPE";
              }
            }
            else {
              if (param_1 == -0x7ffbfdfc) {
                return "DIERR_HASEFFECTS & VFW_E_ALREADY_CONNECTED & DMO_E_NOTACCEPTING";
              }
              if (param_1 == -0x7ffbfdfb) {
                return "DIERR_NOTEXCLUSIVEACQUIRED & VFW_E_FILTER_ACTIVE & DMO_E_TYPE_NOT_ACCEPTED";
              }
              if (param_1 == -0x7ffbfdfa) {
                return "DIERR_INCOMPLETEEFFECT & VFW_E_NO_TYPES & DMO_E_NO_MORE_ITEMS";
              }
            }
          }
          else {
            switch(param_1) {
            case -0x7ffbfdf8:
              return "DIERR_EFFECTPLAYING & VFW_E_INVALID_DIRECTION";
            case -0x7ffbfdf7:
              return "DIERR_UNPLUGGED & VFW_E_NOT_CONNECTED";
            case -0x7ffbfdf6:
              return "DIERR_REPORTFULL & VFW_E_NO_ALLOCATOR";
            case -0x7ffbfdf5:
              return "DIERR_MAPFILEFAIL & VFW_E_RUNTIME_ERROR";
            case -0x7ffbfdf4:
              return "VFW_E_BUFFER_NOTSET";
            case -0x7ffbfdf3:
              return "VFW_E_BUFFER_OVERFLOW";
            case -0x7ffbfdf2:
              return "VFW_E_BADALIGN";
            case -0x7ffbfdf1:
              return "VFW_E_ALREADY_COMMITTED";
            case -0x7ffbfdf0:
              return "VFW_E_BUFFERS_OUTSTANDING";
            case -0x7ffbfdef:
              return "VFW_E_NOT_COMMITTED";
            case -0x7ffbfdee:
              return "VFW_E_SIZENOTSET";
            case -0x7ffbfded:
              return "VFW_E_NO_CLOCK";
            case -0x7ffbfdec:
              return "VFW_E_NO_SINK";
            case -0x7ffbfdeb:
              return "VFW_E_NO_INTERFACE";
            case -0x7ffbfdea:
              return "VFW_E_NOT_FOUND";
            case -0x7ffbfde9:
              return "VFW_E_CANNOT_CONNECT";
            case -0x7ffbfde8:
              return "VFW_E_CANNOT_RENDER";
            case -0x7ffbfde7:
              return "VFW_E_CHANGING_FORMAT";
            }
          }
        }
        else {
          switch(param_1) {
          case -0x7ffbfde5:
            return "VFW_E_NOT_OVERLAY_CONNECTION";
          case -0x7ffbfde4:
            return "VFW_E_NOT_SAMPLE_CONNECTION";
          case -0x7ffbfde3:
            return "VFW_E_PALETTE_SET";
          case -0x7ffbfde2:
            return "VFW_E_COLOR_KEY_SET";
          case -0x7ffbfde1:
            return "VFW_E_NO_COLOR_KEY_FOUND";
          case -0x7ffbfde0:
            return "VFW_E_NO_PALETTE_AVAILABLE";
          case -0x7ffbfddf:
            return "VFW_E_NO_DISPLAY_PALETTE";
          case -0x7ffbfdde:
            return "VFW_E_TOO_MANY_COLORS";
          case -0x7ffbfddd:
            return "VFW_E_STATE_CHANGED";
          case -0x7ffbfddc:
            return "VFW_E_NOT_STOPPED";
          case -0x7ffbfddb:
            return "VFW_E_NOT_PAUSED";
          case -0x7ffbfdda:
            return "VFW_E_NOT_RUNNING";
          case -0x7ffbfdd9:
            return "VFW_E_WRONG_STATE";
          case -0x7ffbfdd8:
            return "VFW_E_START_TIME_AFTER_END";
          case -0x7ffbfdd7:
            return "VFW_E_INVALID_RECT";
          case -0x7ffbfdd6:
            return "VFW_E_TYPE_NOT_ACCEPTED";
          case -0x7ffbfdd5:
            return "VFW_E_SAMPLE_REJECTED";
          case -0x7ffbfdd4:
            return "VFW_E_SAMPLE_REJECTED_EOS";
          case -0x7ffbfdd3:
            return "VFW_E_DUPLICATE_NAME";
          case -0x7ffbfdd2:
            return "VFW_E_TIMEOUT";
          case -0x7ffbfdd1:
            return "VFW_E_INVALID_FILE_FORMAT";
          case -0x7ffbfdd0:
            return "VFW_E_ENUM_OUT_OF_RANGE";
          case -0x7ffbfdcf:
            return "VFW_E_CIRCULAR_GRAPH";
          case -0x7ffbfdce:
            return "VFW_E_NOT_ALLOWED_TO_SAVE";
          case -0x7ffbfdcd:
            return "VFW_E_TIME_ALREADY_PASSED";
          case -0x7ffbfdcc:
            return "VFW_E_ALREADY_CANCELLED";
          case -0x7ffbfdcb:
            return "VFW_E_CORRUPT_GRAPH_FILE";
          case -0x7ffbfdca:
            return "VFW_E_ADVISE_ALREADY_SET";
          case -0x7ffbfdc8:
            return "VFW_E_NO_MODEX_AVAILABLE";
          case -0x7ffbfdc7:
            return "VFW_E_NO_ADVISE_SET";
          case -0x7ffbfdc6:
            return "VFW_E_NO_FULLSCREEN";
          case -0x7ffbfdc5:
            return "VFW_E_IN_FULLSCREEN_MODE";
          case -0x7ffbfdc0:
            return "VFW_E_UNKNOWN_FILE_TYPE";
          case -0x7ffbfdbf:
            return "VFW_E_CANNOT_LOAD_SOURCE_FILTER";
          case -0x7ffbfdbd:
            return "VFW_E_FILE_TOO_SHORT";
          case -0x7ffbfdbc:
            return "VFW_E_INVALID_FILE_VERSION";
          case -0x7ffbfdb9:
            return "VFW_E_INVALID_CLSID";
          }
        }
      }
      else if (param_1 < -0x7ffbfd79) {
        if (param_1 == -0x7ffbfd7a) {
          return "VFW_E_DVD_STATE_WRONG_DISC";
        }
        switch(param_1) {
        case -0x7ffbfdb7:
          return "VFW_E_SAMPLE_TIME_NOT_SET";
        case -0x7ffbfdaf:
          return "VFW_E_MEDIA_TIME_NOT_SET";
        case -0x7ffbfdae:
          return "VFW_E_NO_TIME_FORMAT_SET";
        case -0x7ffbfdad:
          return "VFW_E_MONO_AUDIO_HW";
        case -0x7ffbfdab:
          return "VFW_E_NO_DECOMPRESSOR";
        case -0x7ffbfdaa:
          return "VFW_E_NO_AUDIO_HARDWARE";
        case -0x7ffbfda7:
          return "VFW_E_RPZA";
        case -0x7ffbfda5:
          return "VFW_E_PROCESSOR_NOT_SUITABLE";
        case -0x7ffbfda4:
          return "VFW_E_UNSUPPORTED_AUDIO";
        case -0x7ffbfda3:
          return "VFW_E_UNSUPPORTED_VIDEO";
        case -0x7ffbfda2:
          return "VFW_E_MPEG_NOT_CONSTRAINED";
        case -0x7ffbfda1:
          return "VFW_E_NOT_IN_GRAPH";
        case -0x7ffbfd9f:
          return "VFW_E_NO_TIME_FORMAT";
        case -0x7ffbfd9e:
          return "VFW_E_READ_ONLY";
        case -0x7ffbfd9c:
          return "VFW_E_BUFFER_UNDERFLOW";
        case -0x7ffbfd9b:
          return "VFW_E_UNSUPPORTED_STREAM";
        case -0x7ffbfd9a:
          return "VFW_E_NO_TRANSPORT";
        case -0x7ffbfd97:
          return "VFW_E_BAD_VIDEOCD";
        case -0x7ffbfd8f:
          return "VFW_E_OUT_OF_VIDEO_MEMORY";
        case -0x7ffbfd8e:
          return "VFW_E_VP_NEGOTIATION_FAILED";
        case -0x7ffbfd8d:
          return "VFW_E_DDRAW_CAPS_NOT_SUITABLE";
        case -0x7ffbfd8c:
          return "VFW_E_NO_VP_HARDWARE";
        case -0x7ffbfd8b:
          return "VFW_E_NO_CAPTURE_HARDWARE";
        case -0x7ffbfd8a:
          return "VFW_E_DVD_OPERATION_INHIBITED";
        case -0x7ffbfd89:
          return "VFW_E_DVD_INVALIDDOMAIN";
        case -0x7ffbfd88:
          return "VFW_E_DVD_NO_BUTTON";
        case -0x7ffbfd87:
          return "VFW_E_DVD_GRAPHNOTREADY";
        case -0x7ffbfd86:
          return "VFW_E_DVD_RENDERFAIL";
        case -0x7ffbfd85:
          return "VFW_E_DVD_DECNOTENOUGH";
        case -0x7ffbfd84:
          return "VFW_E_DDRAW_VERSION_NOT_SUITABLE";
        case -0x7ffbfd83:
          return "VFW_E_COPYPROT_FAILED";
        case -0x7ffbfd81:
          return "VFW_E_TIME_EXPIRED";
        case -0x7ffbfd7f:
          return "VFW_E_DVD_WRONG_SPEED";
        case -0x7ffbfd7e:
          return "VFW_E_DVD_MENU_DOES_NOT_EXIST";
        case -0x7ffbfd7d:
          return "VFW_E_DVD_CMD_CANCELLED";
        case -0x7ffbfd7c:
          return "VFW_E_DVD_STATE_WRONG_VERSION";
        case -0x7ffbfd7b:
          return "VFW_E_DVD_STATE_CORRUPT";
        }
      }
      else if (param_1 < -0x7ffbfcff) {
        if (param_1 == -0x7ffbfd00) {
          return "DIERR_DRIVERFIRST";
        }
        switch(param_1) {
        case -0x7ffbfd79:
          return "VFW_E_DVD_INCOMPATIBLE_REGION";
        case -0x7ffbfd78:
          return "VFW_E_DVD_NO_ATTRIBUTES";
        case -0x7ffbfd77:
          return "VFW_E_DVD_NO_GOUP_PGC";
        case -0x7ffbfd76:
          return "VFW_E_DVD_LOW_PARENTAL_LEVEL";
        case -0x7ffbfd75:
          return "VFW_E_DVD_NOT_IN_KARAOKE_MODE";
        case -0x7ffbfd72:
          return "VFW_E_FRAME_STEP_UNSUPPORTED";
        case -0x7ffbfd71:
          return "VFW_E_DVD_STREAM_DISABLED";
        case -0x7ffbfd70:
          return "VFW_E_DVD_TITLE_UNKNOWN";
        case -0x7ffbfd6f:
          return "VFW_E_DVD_INVALID_DISC";
        case -0x7ffbfd6e:
          return "VFW_E_DVD_NO_RESUME_INFORMATION";
        case -0x7ffbfd6d:
          return "VFW_E_PIN_ALREADY_BLOCKED_ON_THIS_THREAD";
        case -0x7ffbfd6c:
          return "VFW_E_PIN_ALREADY_BLOCKED";
        case -0x7ffbfd6b:
          return "VFW_E_CERTIFICATION_FAILURE";
        }
      }
      else if (param_1 < -0x7ff8fffa) {
        if (param_1 == -0x7ff8fffb) {
          return "E_ACCESSDENIED";
        }
        if (param_1 < -0x7ffbfc0d) {
          if (param_1 == -0x7ffbfc0e) {
            return "VFW_E_BAD_KEY";
          }
          if (param_1 == -0x7ffbfcff) {
            return "DIERR_DRIVERFIRST+1";
          }
          if (param_1 == -0x7ffbfcfe) {
            return "DIERR_DRIVERFIRST+2";
          }
          if (param_1 == -0x7ffbfcfd) {
            return "DIERR_DRIVERFIRST+3";
          }
          if (param_1 == -0x7ffbfcfc) {
            return "DIERR_DRIVERFIRST+4";
          }
          if (param_1 == -0x7ffbfcfb) {
            return "DIERR_DRIVERFIRST+5";
          }
        }
        else {
          if (param_1 == -0x7ffbfc01) {
            return "DIERR_DRIVERLAST";
          }
          if (param_1 == -0x7ffbfc00) {
            return "DIERR_INVALIDCLASSINSTALLER";
          }
          if (param_1 == -0x7ffbfbff) {
            return "DIERR_CANCELLED";
          }
          if (param_1 == -0x7ffbfbfe) {
            return "DIERR_BADINF";
          }
          if (param_1 == -0x7ff8fffe) goto switchD_005919e5_caseD_2;
        }
      }
      else if (param_1 < -0x7ff8ffa8) {
        if (param_1 == -0x7ff8ffa9) {
          return "E_INVALIDARG";
        }
        if (param_1 == -0x7ff8fffa) {
          return "E_HANDLE";
        }
        if (param_1 == -0x7ff8fff4) {
          return "DIERR_NOTACQUIRED";
        }
        if (param_1 == -0x7ff8fff2) {
          return "E_OUTOFMEMORY";
        }
        if (param_1 == -0x7ff8ffeb) {
          return "DIERR_NOTINITIALIZED";
        }
        if (param_1 == -0x7ff8ffe2) {
          return "DIERR_INPUTLOST";
        }
      }
      else {
        if (param_1 == -0x7ff8ff89) {
          return "DIERR_BADDRIVERVER";
        }
        if (param_1 == -0x7ff8ff56) {
          return "DIERR_ACQUIRED";
        }
        if (param_1 == -0x7ff8fefd) {
          return "DIERR_NOMOREITEMS";
        }
        if (param_1 == -0x7ff8fb82) {
          return "DIERR_OLDDIRECTINPUTVERSION";
        }
      }
    }
    else if (param_1 < -0x7fea7d6f) {
      if (param_1 == -0x7fea7d70) {
        return "DPNERR_INVALIDADDRESSFORMAT";
      }
      if (param_1 < -0x7feafe78) {
        if (param_1 == -0x7feafe79) {
          return "DVERR_INITIALIZED";
        }
        if (param_1 < -0x7feafe8f) {
          if (param_1 == -0x7feafe90) {
            return "DVERR_INVALIDTARGET";
          }
          if (param_1 < -0x7feaff69) {
            if (param_1 == -0x7feaff6a) {
              return "DVERR_INVALIDHANDLE";
            }
            if (param_1 < -0x7feaffb5) {
              if (param_1 == -0x7feaffb6) {
                return "DVERR_EXCEPTION";
              }
              if (param_1 == -0x7ff8fb70) {
                return "E_PROP_ID_UNSUPPORTED";
              }
              if (param_1 == -0x7ff8fb6e) {
                return "E_PROP_SET_UNSUPPORTED";
              }
              if (param_1 == -0x7ff8fb21) {
                return "DIERR_ALREADYINITIALIZED";
              }
              if (param_1 == -0x7feaffe2) {
                return "DVERR_BUFFERTOOSMALL";
              }
            }
            else {
              if (param_1 == -0x7feaff88) {
                return "DVERR_INVALIDFLAGS";
              }
              if (param_1 == -0x7feaff7e) {
                return "DVERR_INVALIDOBJECT";
              }
              if (param_1 == -0x7feaff79) {
                return "DVERR_INVALIDPLAYER";
              }
              if (param_1 == -0x7feaff6f) {
                return "DVERR_INVALIDGROUP";
              }
            }
          }
          else if (param_1 < -0x7feafe95) {
            if (param_1 == -0x7feafe96) {
              return "DVERR_CONNECTED";
            }
            if (param_1 == -0x7feafed4) {
              return "DVERR_SESSIONLOST";
            }
            if (param_1 == -0x7feafed2) {
              return "DVERR_NOVOICESESSION";
            }
            if (param_1 == -0x7feafe98) {
              return "DVERR_CONNECTIONLOST";
            }
            if (param_1 == -0x7feafe97) {
              return "DVERR_NOTINITIALIZED";
            }
          }
          else {
            if (param_1 == -0x7feafe95) {
              return "DVERR_NOTCONNECTED";
            }
            if (param_1 == -0x7feafe92) {
              return "DVERR_CONNECTABORTING";
            }
            if (param_1 == -0x7feafe91) {
              return "DVERR_NOTALLOWED";
            }
          }
        }
        else {
          switch(param_1) {
          case -0x7feafe8f:
            return "DVERR_TRANSPORTNOTHOST";
          case -0x7feafe8e:
            return "DVERR_COMPRESSIONNOTSUPPORTED";
          case -0x7feafe8d:
            return "DVERR_ALREADYPENDING";
          case -0x7feafe8c:
            return "DVERR_SOUNDINITFAILURE";
          case -0x7feafe8b:
            return "DVERR_TIMEOUT";
          case -0x7feafe8a:
            return "DVERR_CONNECTABORTED";
          case -0x7feafe89:
            return "DVERR_NO3DSOUND";
          case -0x7feafe88:
            return "DVERR_ALREADYBUFFERED";
          case -0x7feafe87:
            return "DVERR_NOTBUFFERED";
          case -0x7feafe86:
            return "DVERR_HOSTING";
          case -0x7feafe85:
            return "DVERR_NOTHOSTING";
          case -0x7feafe84:
            return "DVERR_INVALIDDEVICE";
          case -0x7feafe83:
            return "DVERR_RECORDSYSTEMERROR";
          case -0x7feafe82:
            return "DVERR_PLAYBACKSYSTEMERROR";
          case -0x7feafe81:
            return "DVERR_SENDERROR";
          case -0x7feafe80:
            return "DVERR_USERCANCEL";
          case -0x7feafe7d:
            return "DVERR_RUNSETUP";
          case -0x7feafe7c:
            return "DVERR_INCOMPATIBLEVERSION";
          }
        }
      }
      else if (param_1 < -0x7fea7fcf) {
        if (param_1 == -0x7fea7fd0) {
          return "DPNERR_ABORTED";
        }
        switch(param_1) {
        case -0x7feafe78:
          return "DVERR_NOTRANSPORT";
        case -0x7feafe77:
          return "DVERR_NOCALLBACK";
        case -0x7feafe76:
          return "DVERR_TRANSPORTNOTINIT";
        case -0x7feafe75:
          return "DVERR_TRANSPORTNOSESSION";
        case -0x7feafe74:
          return "DVERR_TRANSPORTNOPLAYER";
        case -0x7feafe73:
          return "DVERR_USERBACK";
        case -0x7feafe72:
          return "DVERR_NORECVOLAVAILABLE";
        case -0x7feafe71:
          return "DVERR_INVALIDBUFFER";
        case -0x7feafe70:
          return "DVERR_LOCKEDBUFFER";
        }
      }
      else if (param_1 < -0x7fea7e8f) {
        if (param_1 == -0x7fea7e90) {
          return "DPNERR_CONVERSION";
        }
        if (param_1 < -0x7fea7eff) {
          if (param_1 == -0x7fea7f00) {
            return "DPNERR_BUFFERTOOSMALL";
          }
          if (param_1 == -0x7fea7fc0) {
            return "DPNERR_ADDRESSING";
          }
          if (param_1 == -0x7fea7fb0) {
            return "DPNERR_ALREADYCLOSING";
          }
          if (param_1 == -0x7fea7fa0) {
            return "DPNERR_ALREADYCONNECTED";
          }
          if (param_1 == -0x7fea7f90) {
            return "DPNERR_ALREADYDISCONNECTING";
          }
          if (param_1 == -0x7fea7f80) {
            return "DPNERR_ALREADYINITIALIZED";
          }
          if (param_1 == -0x7fea7f70) {
            return "DPNERR_ALREADYREGISTERED";
          }
        }
        else {
          if (param_1 == -0x7fea7ef0) {
            return "DPNERR_CANNOTCANCEL";
          }
          if (param_1 == -0x7fea7ee0) {
            return "DPNERR_CANTCREATEGROUP";
          }
          if (param_1 == -0x7fea7ed0) {
            return "DPNERR_CANTCREATEPLAYER";
          }
          if (param_1 == -0x7fea7ec0) {
            return "DPNERR_CANTLAUNCHAPPLICATION";
          }
          if (param_1 == -0x7fea7eb0) {
            return "DPNERR_CONNECTING";
          }
          if (param_1 == -0x7fea7ea0) {
            return "DPNERR_CONNECTIONLOST";
          }
        }
      }
      else if (param_1 < -0x7fea7dcf) {
        if (param_1 == -0x7fea7dd0) {
          return "DPNERR_EXCEPTION";
        }
        if (param_1 == -0x7fea7e8b) {
          return "DPNERR_DATATOOLARGE";
        }
        if (param_1 == -0x7fea7e80) {
          return "DPNERR_DOESNOTEXIST";
        }
        if (param_1 == -0x7fea7e70) {
          return "DPNERR_DUPLICATECOMMAND";
        }
        if (param_1 == -0x7fea7e00) {
          return "DPNERR_ENDPOINTNOTRECEIVING";
        }
        if (param_1 == -0x7fea7df0) {
          return "DPNERR_ENUMQUERYTOOLARGE";
        }
        if (param_1 == -0x7fea7de0) {
          return "DPNERR_ENUMRESPONSETOOLARGE";
        }
      }
      else {
        if (param_1 == -0x7fea7dc0) {
          return "DPNERR_GROUPNOTEMPTY";
        }
        if (param_1 == -0x7fea7db0) {
          return "DPNERR_HOSTING";
        }
        if (param_1 == -0x7fea7da0) {
          return "DPNERR_HOSTREJECTEDCONNECTION";
        }
        if (param_1 == -0x7fea7d90) {
          return "DPNERR_HOSTTERMINATEDSESSION";
        }
        if (param_1 == -0x7fea7d80) {
          return "DPNERR_INCOMPLETEADDRESS";
        }
      }
    }
    else if (param_1 < -0x7789fff5) {
      if (param_1 == -0x7789fff6) {
        return "DDERR_CANNOTATTACHSURFACE";
      }
      if (param_1 < -0x7fea7b7f) {
        if (param_1 == -0x7fea7b80) {
          return "DPNERR_NOCONNECTION";
        }
        if (param_1 < -0x7fea7c6f) {
          if (param_1 == -0x7fea7c70) {
            return "DPNERR_INVALIDINTERFACE";
          }
          if (param_1 < -0x7fea7cbf) {
            if (param_1 == -0x7fea7cc0) {
              return "DPNERR_INVALIDFLAGS";
            }
            if (param_1 == -0x7fea7d00) {
              return "DPNERR_INVALIDAPPLICATION";
            }
            if (param_1 == -0x7fea7cf0) {
              return "DPNERR_INVALIDCOMMAND";
            }
            if (param_1 == -0x7fea7ce0) {
              return "DPNERR_INVALIDDEVICEADDRESS";
            }
            if (param_1 == -0x7fea7cd0) {
              return "DPNERR_INVALIDENDPOINT";
            }
          }
          else {
            if (param_1 == -0x7fea7cb0) {
              return "DPNERR_INVALIDGROUP";
            }
            if (param_1 == -0x7fea7ca0) {
              return "DPNERR_INVALIDHANDLE";
            }
            if (param_1 == -0x7fea7c90) {
              return "DPNERR_INVALIDHOSTADDRESS";
            }
            if (param_1 == -0x7fea7c80) {
              return "DPNERR_INVALIDINSTANCE";
            }
          }
        }
        else if (param_1 < -0x7fea7bbf) {
          if (param_1 == -0x7fea7bc0) {
            return "DPNERR_INVALIDSTRING";
          }
          if (param_1 == -0x7fea7c00) {
            return "DPNERR_INVALIDOBJECT";
          }
          if (param_1 == -0x7fea7bf0) {
            return "DPNERR_INVALIDPASSWORD";
          }
          if (param_1 == -0x7fea7be0) {
            return "DPNERR_INVALIDPLAYER";
          }
          if (param_1 == -0x7fea7bd0) {
            return "DPNERR_INVALIDPRIORITY";
          }
        }
        else {
          if (param_1 == -0x7fea7bb0) {
            return "DPNERR_INVALIDURL";
          }
          if (param_1 == -0x7fea7ba0) {
            return "DPNERR_INVALIDVERSION";
          }
          if (param_1 == -0x7fea7b90) {
            return "DPNERR_NOCAPS";
          }
        }
      }
      else if (param_1 < -0x7fea7a7f) {
        if (param_1 == -0x7fea7a80) {
          return "DPNERR_PLAYERNOTINGROUP";
        }
        if (param_1 < -0x7fea7acf) {
          if (param_1 == -0x7fea7ad0) {
            return "DPNERR_NOTHOST";
          }
          if (param_1 == -0x7fea7b70) {
            return "DPNERR_NOHOSTPLAYER";
          }
          if (param_1 == -0x7fea7b00) {
            return "DPNERR_NOMOREADDRESSCOMPONENTS";
          }
          if (param_1 == -0x7fea7af0) {
            return "DPNERR_NORESPONSE";
          }
          if (param_1 == -0x7fea7ae0) {
            return "DPNERR_NOTALLOWED";
          }
        }
        else {
          if (param_1 == -0x7fea7ac0) {
            return "DPNERR_NOTREADY";
          }
          if (param_1 == -0x7fea7ab0) {
            return "DPNERR_NOTREGISTERED";
          }
          if (param_1 == -0x7fea7aa0) {
            return "DPNERR_PLAYERALREADYINGROUP";
          }
          if (param_1 == -0x7fea7a90) {
            return "DPNERR_PLAYERLOST";
          }
        }
      }
      else if (param_1 < -0x7fea79cf) {
        if (param_1 == -0x7fea79d0) {
          return "DPNERR_TIMEDOUT";
        }
        if (param_1 == -0x7fea7a70) {
          return "DPNERR_PLAYERNOTREACHABLE";
        }
        if (param_1 == -0x7fea7a00) {
          return "DPNERR_SENDTOOLARGE";
        }
        if (param_1 == -0x7fea79f0) {
          return "DPNERR_SESSIONFULL";
        }
        if (param_1 == -0x7fea79e0) {
          return "DPNERR_TABLEFULL";
        }
      }
      else {
        if (param_1 == -0x7fea79c0) {
          return "DPNERR_UNINITIALIZED";
        }
        if (param_1 == -0x7fea79b0) {
          return "DPNERR_USERCANCEL";
        }
        if (param_1 == -0x7789fffb) {
          return "DDERR_ALREADYINITIALIZED";
        }
      }
    }
    else if (param_1 < -0x7789ff2b) {
      if (param_1 == -0x7789ff2c) {
        return "DDERR_NOCOOPERATIVELEVELSET";
      }
      if (param_1 < -0x7789ff6e) {
        if (param_1 == -0x7789ff6f) {
          return "DDERR_INVALIDPIXELFORMAT";
        }
        if (param_1 < -0x7789ffa0) {
          if (param_1 == -0x7789ffa1) {
            return "DDERR_INCOMPATIBLEPRIMARY";
          }
          if (param_1 == -0x7789ffec) {
            return "DDERR_CANNOTDETACHSURFACE";
          }
          if (param_1 == -0x7789ffd8) {
            return "DDERR_CURRENTLYNOTAVAIL";
          }
          if (param_1 == -0x7789ffc9) {
            return "DDERR_EXCEPTION";
          }
          if (param_1 == -0x7789ffa6) {
            return "DDERR_HEIGHTALIGN";
          }
        }
        else {
          if (param_1 == -0x7789ff9c) {
            return "DDERR_INVALIDCAPS";
          }
          if (param_1 == -0x7789ff92) {
            return "DDERR_INVALIDCLIPLIST";
          }
          if (param_1 == -0x7789ff88) {
            return "DDERR_INVALIDMODE";
          }
          if (param_1 == -0x7789ff7e) {
            return "DDERR_INVALIDOBJECT";
          }
        }
      }
      else if (param_1 < -0x7789ff4a) {
        if (param_1 == -0x7789ff4b) {
          return "DDERR_NOSTEREOHARDWARE";
        }
        if (param_1 == -0x7789ff6a) {
          return "DDERR_INVALIDRECT";
        }
        if (param_1 == -0x7789ff60) {
          return "DDERR_LOCKEDSURFACES";
        }
        if (param_1 == -0x7789ff56) {
          return "DDERR_NO3D";
        }
        if (param_1 == -0x7789ff4c) {
          return "DDERR_NOALPHAHW";
        }
      }
      else {
        if (param_1 == -0x7789ff4a) {
          return "DDERR_NOSURFACELEFT";
        }
        if (param_1 == -0x7789ff33) {
          return "DDERR_NOCLIPLIST";
        }
        if (param_1 == -0x7789ff2e) {
          return "DDERR_NOCOLORCONVHW";
        }
      }
    }
    else if (param_1 < -0x7789fefb) {
      if (param_1 == -0x7789fefc) {
        return "DDERR_NOOVERLAYHW";
      }
      if (param_1 < -0x7789ff19) {
        if (param_1 == -0x7789ff1a) {
          return "DDERR_NOFLIPHW";
        }
        if (param_1 == -0x7789ff29) {
          return "DDERR_NOCOLORKEY";
        }
        if (param_1 == -0x7789ff24) {
          return "DDERR_NOCOLORKEYHW";
        }
        if (param_1 == -0x7789ff22) {
          return "DDERR_NODIRECTDRAWSUPPORT";
        }
        if (param_1 == -0x7789ff1f) {
          return "DDERR_NOEXCLUSIVEMODE";
        }
      }
      else {
        if (param_1 == -0x7789ff10) {
          return "DDERR_NOGDI";
        }
        if (param_1 == -0x7789ff06) {
          return "DDERR_NOMIRRORHW";
        }
        if (param_1 == -0x7789ff01) {
          return "DDERR_NOTFOUND";
        }
      }
    }
    else if (param_1 < -0x7789fec3) {
      if (param_1 == -0x7789fec4) {
        return "DDERR_NOT4BITCOLOR";
      }
      if (param_1 == -0x7789fef2) {
        return "DDERR_OVERLAPPINGRECTS";
      }
      if (param_1 == -0x7789fee8) {
        return "DDERR_NORASTEROPHW";
      }
      if (param_1 == -0x7789fede) {
        return "DDERR_NOROTATIONHW";
      }
      if (param_1 == -0x7789feca) {
        return "DDERR_NOSTRETCHHW";
      }
    }
    else {
      if (param_1 == -0x7789fec3) {
        return "DDERR_NOT4BITCOLORINDEX";
      }
      if (param_1 == -0x7789fec0) {
        return "DDERR_NOT8BITCOLOR";
      }
      if (param_1 == -0x7789feb6) {
        return "DDERR_NOTEXTUREHW";
      }
    }
  }
  else if (param_1 < -0x7787eef6) {
    if (param_1 == -0x7787eef7) {
      return "DMUS_E_INVALIDOFFSET";
    }
    if (param_1 < -0x7789fd44) {
      if (param_1 == -0x7789fd45) {
        return "DDERR_DEVICEDOESNTOWNSURFACE";
      }
      if (param_1 < -0x7789fdc2) {
        if (param_1 == -0x7789fdc3) {
          return "DDERR_NOPALETTEHW";
        }
        if (param_1 < -0x7789fe01) {
          if (param_1 == -0x7789fe02) {
            return "DDERR_UNSUPPORTEDFORMAT";
          }
          if (param_1 < -0x7789fe5b) {
            if (param_1 == -0x7789fe5c) {
              return "DDERR_SURFACEALREADYDEPENDENT";
            }
            if (param_1 < -0x7789fe81) {
              if (param_1 == -0x7789fe82) {
                return "DDERR_OVERLAYCANTCLIP";
              }
              if (param_1 == -0x7789feac) {
                return "DDERR_NOZBUFFERHW";
              }
              if (param_1 == -0x7789fea2) {
                return "DDERR_NOZOVERLAYHW";
              }
              if (param_1 == -0x7789fe98) {
                return "DDERR_OUTOFCAPS";
              }
              if (param_1 == -0x7789fe84) {
                return "D3DERR_OUTOFVIDEOMEMORY";
              }
            }
            else {
              if (param_1 == -0x7789fe80) {
                return "DDERR_OVERLAYCOLORKEYONLYONEACTIVE";
              }
              if (param_1 == -0x7789fe7d) {
                return "DDERR_PALETTEBUSY";
              }
              if (param_1 == -0x7789fe70) {
                return "DDERR_COLORKEYNOTSET";
              }
              if (param_1 == -0x7789fe66) {
                return "DDERR_SURFACEALREADYATTACHED";
              }
            }
          }
          else if (param_1 < -0x7789fe33) {
            if (param_1 == -0x7789fe34) {
              return "DDERR_SURFACENOTATTACHED";
            }
            if (param_1 == -0x7789fe52) {
              return "DDERR_SURFACEBUSY";
            }
            if (param_1 == -0x7789fe4d) {
              return "DDERR_CANTLOCKSURFACE";
            }
            if (param_1 == -0x7789fe48) {
              return "DDERR_SURFACEISOBSCURED";
            }
            if (param_1 == -0x7789fe3e) {
              return "DDERR_SURFACELOST";
            }
          }
          else {
            if (param_1 == -0x7789fe2a) {
              return "DDERR_TOOBIGHEIGHT";
            }
            if (param_1 == -0x7789fe20) {
              return "DDERR_TOOBIGSIZE";
            }
            if (param_1 == -0x7789fe16) {
              return "DDERR_TOOBIGWIDTH";
            }
          }
        }
        else {
          switch(param_1) {
          case -0x7789fdf8:
            return "DDERR_UNSUPPORTEDMASK";
          case -0x7789fdf7:
            return "DDERR_INVALIDSTREAM";
          case -0x7789fde7:
            return "DDERR_VERTICALBLANKINPROGRESS";
          case -0x7789fde4:
            return "DDERR_WASSTILLDRAWING";
          case -0x7789fde2:
            return "DDERR_DDSCAPSCOMPLEXREQUIRED";
          case -0x7789fdd0:
            return "DDERR_XALIGN";
          case -0x7789fdcf:
            return "DDERR_INVALIDDIRECTDRAWGUID";
          case -0x7789fdce:
            return "DDERR_DIRECTDRAWALREADYCREATED";
          case -0x7789fdcd:
            return "DDERR_NODIRECTDRAWHW";
          case -0x7789fdcc:
            return "DDERR_PRIMARYSURFACEALREADYEXISTS";
          case -0x7789fdcb:
            return "DDERR_NOEMULATION";
          case -0x7789fdca:
            return "DDERR_REGIONTOOSMALL";
          case -0x7789fdc9:
            return "DDERR_CLIPPERISUSINGHWND";
          case -0x7789fdc8:
            return "DDERR_NOCLIPPERATTACHED";
          case -0x7789fdc7:
            return "DDERR_NOHWND";
          case -0x7789fdc6:
            return "DDERR_HWNDSUBCLASSED";
          case -0x7789fdc5:
            return "DDERR_HWNDALREADYSET";
          case -0x7789fdc4:
            return "DDERR_NOPALETTEATTACHED";
          }
        }
      }
      else {
        switch(param_1) {
        case -0x7789fdc2:
          return "DDERR_BLTFASTCANTCLIP";
        case -0x7789fdc1:
          return "DDERR_NOBLTHW";
        case -0x7789fdc0:
          return "DDERR_NODDROPSHW";
        case -0x7789fdbf:
          return "DDERR_OVERLAYNOTVISIBLE";
        case -0x7789fdbe:
          return "DDERR_NOOVERLAYDEST";
        case -0x7789fdbd:
          return "DDERR_INVALIDPOSITION";
        case -0x7789fdbc:
          return "DDERR_NOTAOVERLAYSURFACE";
        case -0x7789fdbb:
          return "DDERR_EXCLUSIVEMODEALREADYSET";
        case -0x7789fdba:
          return "DDERR_NOTFLIPPABLE";
        case -0x7789fdb9:
          return "DDERR_CANTDUPLICATE";
        case -0x7789fdb8:
          return "DDERR_NOTLOCKED";
        case -0x7789fdb7:
          return "DDERR_CANTCREATEDC";
        case -0x7789fdb6:
          return "DDERR_NODC";
        case -0x7789fdb5:
          return "DDERR_WRONGMODE";
        case -0x7789fdb4:
          return "DDERR_IMPLICITLYCREATED";
        case -0x7789fdb3:
          return "DDERR_NOTPALETTIZED";
        case -0x7789fdb2:
          return "DDERR_UNSUPPORTEDMODE";
        case -0x7789fdb1:
          return "DDERR_NOMIPMAPHW";
        case -0x7789fdb0:
          return "DDERR_INVALIDSURFACETYPE";
        case -0x7789fda8:
          return "DDERR_NOOPTIMIZEHW";
        case -0x7789fda7:
          return "DDERR_NOTLOADED";
        case -0x7789fda6:
          return "DDERR_NOFOCUSWINDOW";
        case -0x7789fda5:
          return "DDERR_NOTONMIPMAPSUBLEVEL";
        case -0x7789fd94:
          return "DDERR_DCALREADYCREATED";
        case -0x7789fd8a:
          return "DDERR_NONONLOCALVIDMEM";
        case -0x7789fd80:
          return "DDERR_CANTPAGELOCK";
        case -0x7789fd6c:
          return "DDERR_CANTPAGEUNLOCK";
        case -0x7789fd58:
          return "DDERR_NOTPAGELOCKED";
        case -0x7789fd4e:
          return "DDERR_MOREDATA";
        case -0x7789fd4d:
          return "DDERR_EXPIRED";
        case -0x7789fd4c:
          return "DDERR_TESTFINISHED";
        case -0x7789fd4b:
          return "DDERR_NEWMODE";
        case -0x7789fd4a:
          return "DDERR_D3DNOTINITIALIZED";
        case -0x7789fd49:
          return "DDERR_VIDEONOTACTIVE";
        case -0x7789fd48:
          return "DDERR_NOMONITORINFORMATION";
        case -0x7789fd47:
          return "DDERR_NODRIVERSUPPORT";
        }
      }
    }
    else if (param_1 < -0x7789f7e7) {
      if (param_1 == -0x7789f7e8) {
        return "D3DERR_WRONGTEXTUREFORMAT";
      }
      switch(param_1) {
      case -0x7789fcae:
        return "DXFILEERR_BADOBJECT";
      case -0x7789fcad:
        return "DXFILEERR_BADVALUE";
      case -0x7789fcac:
        return "DXFILEERR_BADTYPE";
      case -0x7789fcab:
        return "DXFILEERR_BADSTREAMHANDLE";
      case -0x7789fcaa:
        return "DXFILEERR_BADALLOC";
      case -0x7789fca9:
        return "DXFILEERR_NOTFOUND";
      case -0x7789fca8:
        return "DXFILEERR_NOTDONEYET";
      case -0x7789fca7:
        return "DXFILEERR_FILENOTFOUND";
      case -0x7789fca6:
        return "DXFILEERR_RESOURCENOTFOUND";
      case -0x7789fca5:
        return "DXFILEERR_URLNOTFOUND";
      case -0x7789fca4:
        return "DXFILEERR_BADRESOURCE";
      case -0x7789fca3:
        return "DXFILEERR_BADFILETYPE";
      case -0x7789fca2:
        return "DXFILEERR_BADFILEVERSION";
      case -0x7789fca1:
        return "DXFILEERR_BADFILEFLOATSIZE";
      case -0x7789fca0:
        return "DXFILEERR_BADFILECOMPRESSIONTYPE";
      case -0x7789fc9f:
        return "DXFILEERR_BADFILE";
      case -0x7789fc9e:
        return "DXFILEERR_PARSEERROR";
      case -0x7789fc9d:
        return "DXFILEERR_NOTEMPLATE";
      case -0x7789fc9c:
        return "DXFILEERR_BADARRAYSIZE";
      case -0x7789fc9b:
        return "DXFILEERR_BADDATAREFERENCE";
      case -0x7789fc9a:
        return "DXFILEERR_INTERNALERROR";
      case -0x7789fc99:
        return "DXFILEERR_NOMOREOBJECTS";
      case -0x7789fc98:
        return "DXFILEERR_BADINTRINSICS";
      case -0x7789fc97:
        return "DXFILEERR_NOMORESTREAMHANDLES";
      case -0x7789fc96:
        return "DXFILEERR_NOMOREDATA";
      case -0x7789fc95:
        return "DXFILEERR_BADCACHEFILE";
      case -0x7789fc94:
        return "DXFILEERR_NOINTERNET";
      }
    }
    else if (param_1 < -0x7789f799) {
      if (param_1 == -0x7789f79a) {
        return "D3DERR_NOTFOUND";
      }
      switch(param_1) {
      case -0x7789f7e7:
        return "D3DERR_UNSUPPORTEDCOLOROPERATION";
      case -0x7789f7e6:
        return "D3DERR_UNSUPPORTEDCOLORARG";
      case -0x7789f7e5:
        return "D3DERR_UNSUPPORTEDALPHAOPERATION";
      case -0x7789f7e4:
        return "D3DERR_UNSUPPORTEDALPHAARG";
      case -0x7789f7e3:
        return "D3DERR_TOOMANYOPERATIONS";
      case -0x7789f7e2:
        return "D3DERR_CONFLICTINGTEXTUREFILTER";
      case -0x7789f7e1:
        return "D3DERR_UNSUPPORTEDFACTORVALUE";
      case -0x7789f7df:
        return "D3DERR_CONFLICTINGRENDERSTATE";
      case -0x7789f7de:
        return "D3DERR_UNSUPPORTEDTEXTUREFILTER";
      case -0x7789f7da:
        return "D3DERR_CONFLICTINGTEXTUREPALETTE";
      case -0x7789f7d9:
        return "D3DERR_DRIVERINTERNALERROR";
      }
    }
    else if (param_1 < -0x7787ff9b) {
      if (param_1 == -0x7787ff9c) {
        return "DSERR_BADFORMAT";
      }
      if (param_1 < -0x7789f4aa) {
        if (param_1 == -0x7789f4ab) {
          return "D3DXERR_INVALIDMESH";
        }
        if (param_1 < -0x7789f794) {
          if (param_1 == -0x7789f795) {
            return "D3DERR_INVALIDDEVICE";
          }
          if (param_1 == -0x7789f799) {
            return "D3DERR_MOREDATA";
          }
          if (param_1 == -0x7789f798) {
            return "D3DERR_DEVICELOST";
          }
          if (param_1 == -0x7789f797) {
            return "D3DERR_DEVICENOTRESET";
          }
          if (param_1 == -0x7789f796) {
            return "D3DERR_NOTAVAILABLE";
          }
        }
        else {
          if (param_1 == -0x7789f794) {
            return "D3DERR_INVALIDCALL";
          }
          if (param_1 == -0x7789f793) {
            return "D3DERR_DRIVERINVALIDCALL";
          }
          if (param_1 == -0x7789f4ac) {
            return "D3DXERR_CANNOTMODIFYINDEXBUFFER";
          }
        }
      }
      else if (param_1 < -0x7787fff5) {
        if (param_1 == -0x7787fff6) {
          return "DSERR_ALLOCATED";
        }
        if (param_1 == -0x7789f4aa) {
          return "D3DXERR_CANNOTATTRSORT";
        }
        if (param_1 == -0x7789f4a9) {
          return "D3DXERR_SKINNINGNOTSUPPORTED";
        }
        if (param_1 == -0x7789f4a8) {
          return "D3DXERR_TOOMANYINFLUENCES";
        }
        if (param_1 == -0x7789f4a7) {
          return "D3DXERR_INVALIDDATA";
        }
      }
      else {
        if (param_1 == -0x7787ffe2) {
          return "DSERR_CONTROLUNAVAIL";
        }
        if (param_1 == -0x7787ffce) {
          return "DSERR_INVALIDCALL";
        }
        if (param_1 == -0x7787ffba) {
          return "DSERR_PRIOLEVELNEEDED";
        }
      }
    }
    else if (param_1 < -0x7787ff2d) {
      if (param_1 == -0x7787ff2e) {
        return "DSERR_BADSENDBUFFERGUID";
      }
      if (param_1 < -0x7787ff55) {
        if (param_1 == -0x7787ff56) {
          return "DSERR_UNINITIALIZED";
        }
        if (param_1 == -0x7787ff88) {
          return "DSERR_NODRIVER";
        }
        if (param_1 == -0x7787ff7e) {
          return "DSERR_ALREADYINITIALIZED";
        }
        if (param_1 == -0x7787ff6a) {
          return "DSERR_BUFFERLOST";
        }
        if (param_1 == -0x7787ff60) {
          return "DSERR_OTHERAPPHASPRIO";
        }
      }
      else {
        if (param_1 == -0x7787ff4c) {
          return "DSERR_BUFFERTOOSMALL";
        }
        if (param_1 == -0x7787ff42) {
          return "DSERR_DS8_REQUIRED";
        }
        if (param_1 == -0x7787ff38) {
          return "DSERR_SENDLOOP";
        }
      }
    }
    else {
      if (param_1 == -0x7787eeff) {
        return "DMUS_E_DRIVER_FAILED";
      }
      if (param_1 == -0x7787eefe) {
        return "DMUS_E_PORTS_OPEN";
      }
      if (param_1 == -0x7787eefd) {
        return "DMUS_E_DEVICE_IN_USE";
      }
      if (param_1 == -0x7787eefc) {
        return "DMUS_E_INSUFFICIENTBUFFER";
      }
      if (param_1 == -0x7787eefb) {
        return "DMUS_E_BUFFERNOTSET";
      }
      if (param_1 == -0x7787eefa) {
        return "DMUS_E_BUFFERNOTAVAILABLE";
      }
      if (param_1 == -0x7787eef8) {
        return "DMUS_E_NOTADLSCOL";
      }
    }
  }
  else if (param_1 < -0x7787ee8f) {
    if (param_1 == -0x7787ee90) {
      return "DMUS_E_NO_MASTER_CLOCK";
    }
    switch(param_1) {
    case -0x7787eeef:
      return "DMUS_E_ALREADY_LOADED";
    case -0x7787eeed:
      return "DMUS_E_INVALIDPOS";
    case -0x7787eeec:
      return "DMUS_E_INVALIDPATCH";
    case -0x7787eeeb:
      return "DMUS_E_CANNOTSEEK";
    case -0x7787eeea:
      return "DMUS_E_CANNOTWRITE";
    case -0x7787eee9:
      return "DMUS_E_CHUNKNOTFOUND";
    case -0x7787eee7:
      return "DMUS_E_INVALID_DOWNLOADID";
    case -0x7787eee0:
      return "DMUS_E_NOT_DOWNLOADED_TO_PORT";
    case -0x7787eedf:
      return "DMUS_E_ALREADY_DOWNLOADED";
    case -0x7787eede:
      return "DMUS_E_UNKNOWN_PROPERTY";
    case -0x7787eedd:
      return "DMUS_E_SET_UNSUPPORTED";
    case -0x7787eedc:
      return "DMUS_E_GET_UNSUPPORTED";
    case -0x7787eedb:
      return "DMUS_E_NOTMONO";
    case -0x7787eeda:
      return "DMUS_E_BADARTICULATION";
    case -0x7787eed9:
      return "DMUS_E_BADINSTRUMENT";
    case -0x7787eed8:
      return "DMUS_E_BADWAVELINK";
    case -0x7787eed7:
      return "DMUS_E_NOARTICULATION";
    case -0x7787eed6:
      return "DMUS_E_NOTPCM";
    case -0x7787eed5:
      return "DMUS_E_BADWAVE";
    case -0x7787eed4:
      return "DMUS_E_BADOFFSETTABLE";
    case -0x7787eed3:
      return "DMUS_E_UNKNOWNDOWNLOAD";
    case -0x7787eed2:
      return "DMUS_E_NOSYNTHSINK";
    case -0x7787eed1:
      return "DMUS_E_ALREADYOPEN";
    case -0x7787eed0:
      return "DMUS_E_ALREADYCLOSED";
    case -0x7787eecf:
      return "DMUS_E_SYNTHNOTCONFIGURED";
    case -0x7787eece:
      return "DMUS_E_SYNTHACTIVE";
    case -0x7787eecd:
      return "DMUS_E_CANNOTREAD";
    case -0x7787eecc:
      return "DMUS_E_DMUSIC_RELEASED";
    case -0x7787eecb:
      return "DMUS_E_BUFFER_EMPTY";
    case -0x7787eeca:
      return "DMUS_E_BUFFER_FULL";
    case -0x7787eec9:
      return "DMUS_E_PORT_NOT_CAPTURE";
    case -0x7787eec8:
      return "DMUS_E_PORT_NOT_RENDER";
    case -0x7787eec7:
      return "DMUS_E_DSOUND_NOT_SET";
    case -0x7787eec6:
      return "DMUS_E_ALREADY_ACTIVATED";
    case -0x7787eec5:
      return "DMUS_E_INVALIDBUFFER";
    case -0x7787eec4:
      return "DMUS_E_WAVEFORMATNOTSUPPORTED";
    case -0x7787eec3:
      return "DMUS_E_SYNTHINACTIVE";
    case -0x7787eec2:
      return "DMUS_E_DSOUND_ALREADY_SET";
    case -0x7787eec1:
      return "DMUS_E_INVALID_EVENT";
    case -0x7787eeb0:
      return "DMUS_E_UNSUPPORTED_STREAM";
    case -0x7787eeaf:
      return "DMUS_E_ALREADY_INITED";
    case -0x7787eeae:
      return "DMUS_E_INVALID_BAND";
    case -0x7787eeab:
      return "DMUS_E_TRACK_HDR_NOT_FIRST_CK";
    case -0x7787eeaa:
      return "DMUS_E_TOOL_HDR_NOT_FIRST_CK";
    case -0x7787eea9:
      return "DMUS_E_INVALID_TRACK_HDR";
    case -0x7787eea8:
      return "DMUS_E_INVALID_TOOL_HDR";
    case -0x7787eea7:
      return "DMUS_E_ALL_TOOLS_FAILED";
    case -0x7787eea0:
      return "DMUS_E_ALL_TRACKS_FAILED";
    case -0x7787ee9f:
      return "DSERR_OBJECTNOTFOUND";
    case -0x7787ee9e:
      return "DMUS_E_NOT_INIT";
    case -0x7787ee9d:
      return "DMUS_E_TYPE_DISABLED";
    case -0x7787ee9c:
      return "DMUS_E_TYPE_UNSUPPORTED";
    case -0x7787ee9b:
      return "DMUS_E_TIME_PAST";
    case -0x7787ee9a:
      return "DMUS_E_TRACK_NOT_FOUND";
    case -0x7787ee99:
      return "DMUS_E_TRACK_NO_CLOCKTIME_SUPPORT";
    }
  }
  else if (param_1 < 2) {
    if (param_1 == 1) {
      return "S_FALSE";
    }
    if (param_1 < -0x7787ede6) {
      if (param_1 == -0x7787ede7) {
        return "DMUS_E_INVALID_SCRIPTTRACK";
      }
      if (param_1 < -0x7787edfb) {
        if (param_1 == -0x7787edfc) {
          return "DMUS_E_ALREADY_SENT";
        }
        if (param_1 < -0x7787ee7a) {
          if (param_1 == -0x7787ee7b) {
            return "DMUS_E_LOADER_OBJECTNOTFOUND";
          }
          if (param_1 == -0x7787ee80) {
            return "DMUS_E_LOADER_NOCLASSID";
          }
          if (param_1 == -0x7787ee7f) {
            return "DMUS_E_LOADER_BADPATH";
          }
          if (param_1 == -0x7787ee7e) {
            return "DMUS_E_LOADER_FAILEDOPEN";
          }
          if (param_1 == -0x7787ee7d) {
            return "DMUS_E_LOADER_FORMATNOTSUPPORTED";
          }
          if (param_1 == -0x7787ee7c) {
            return "DMUS_E_LOADER_FAILEDCREATE";
          }
        }
        else {
          if (param_1 == -0x7787ee7a) {
            return "DMUS_E_LOADER_NOFILENAME";
          }
          if (param_1 == -0x7787ee00) {
            return "DMUS_E_INVALIDFILE";
          }
          if (param_1 == -0x7787edff) {
            return "DMUS_E_ALREADY_EXISTS";
          }
          if (param_1 == -0x7787edfe) {
            return "DMUS_E_OUT_OF_RANGE";
          }
          if (param_1 == -0x7787edfd) {
            return "DMUS_E_SEGMENT_INIT_FAILED";
          }
        }
      }
      else {
        switch(param_1) {
        case -0x7787edfb:
          return "DMUS_E_CANNOT_FREE";
        case -0x7787edfa:
          return "DMUS_E_CANNOT_OPEN_PORT";
        case -0x7787edf9:
          return "DMUS_E_CANNOT_CONVERT";
        case -0x7787edf0:
          return "DMUS_E_DESCEND_CHUNK_FAIL";
        case -0x7787edef:
          return "DMUS_E_NOT_LOADED";
        case -0x7787eded:
          return "DMUS_E_SCRIPT_LANGUAGE_INCOMPATIBLE";
        case -0x7787edec:
          return "DMUS_E_SCRIPT_UNSUPPORTED_VARTYPE";
        case -0x7787edeb:
          return "DMUS_E_SCRIPT_ERROR_IN_SCRIPT";
        case -0x7787edea:
          return "DMUS_E_SCRIPT_CANTLOAD_OLEAUT32";
        case -0x7787ede9:
          return "DMUS_E_SCRIPT_LOADSCRIPT_ERROR";
        case -0x7787ede8:
          return "DMUS_E_SCRIPT_INVALID_FILE";
        }
      }
    }
    else if (param_1 < 1) {
      if (param_1 == 0) {
        return "S_OK";
      }
      switch(param_1) {
      case -0x7787ede6:
        return "DMUS_E_SCRIPT_VARIABLE_NOT_FOUND";
      case -0x7787ede5:
        return "DMUS_E_SCRIPT_ROUTINE_NOT_FOUND";
      case -0x7787ede4:
        return "DMUS_E_SCRIPT_CONTENT_READONLY";
      case -0x7787ede3:
        return "DMUS_E_SCRIPT_NOT_A_REFERENCE";
      case -0x7787ede2:
        return "DMUS_E_SCRIPT_VALUE_NOT_SUPPORTED";
      case -0x7787ede0:
        return "DMUS_E_INVALID_SEGMENTTRIGGERTRACK";
      case -0x7787eddf:
        return "DMUS_E_INVALID_LYRICSTRACK";
      case -0x7787edde:
        return "DMUS_E_INVALID_PARAMCONTROLTRACK";
      case -0x7787eddd:
        return "DMUS_E_AUDIOVBSCRIPT_SYNTAXERROR";
      case -0x7787eddc:
        return "DMUS_E_AUDIOVBSCRIPT_RUNTIMEERROR";
      case -0x7787eddb:
        return "DMUS_E_AUDIOVBSCRIPT_OPERATIONFAILURE";
      case -0x7787edda:
        return "DMUS_E_AUDIOPATHS_NOT_VALID";
      case -0x7787edd9:
        return "DMUS_E_AUDIOPATHS_IN_USE";
      case -0x7787edd8:
        return "DMUS_E_NO_AUDIOPATH_CONFIG";
      case -0x7787edd7:
        return "DMUS_E_AUDIOPATH_INACTIVE";
      case -0x7787edd6:
        return "DMUS_E_AUDIOPATH_NOBUFFER";
      case -0x7787edd5:
        return "DMUS_E_AUDIOPATH_NOPORT";
      case -0x7787edd4:
        return "DMUS_E_NO_AUDIOPATH";
      case -0x7787edd3:
        return "DMUS_E_INVALIDCHUNK";
      case -0x7787edd2:
        return "DMUS_E_AUDIOPATH_NOGLOBALFXBUFFER";
      case -0x7787edd1:
        return "DMUS_E_INVALID_CONTAINER_OBJECT";
      }
    }
  }
  else if (param_1 < 0x40104) {
    if (param_1 == 0x40103) {
      return "VFW_S_NO_MORE_ITEMS";
    }
    switch(param_1) {
    case 2:
switchD_005919e5_caseD_2:
      return "ERROR_FILE_NOT_FOUND";
    case 3:
      return "ERROR_PATH_NOT_FOUND";
    case 4:
      return "ERROR_TOO_MANY_OPEN_FILES";
    case 5:
      return "ERROR_ACCESS_DENIED";
    case 6:
      return "ERROR_INVALID_HANDLE";
    case 8:
      return "ERROR_NOT_ENOUGH_MEMORY";
    case 9:
      return "ERROR_INVALID_BLOCK";
    case 10:
      return "ERROR_BAD_ENVIRONMENT";
    case 0xb:
      return "ERROR_BAD_FORMAT";
    case 0xe:
      return "ERROR_OUTOFMEMORY";
    }
  }
  else if (param_1 < 0x4028d) {
    if (param_1 == 0x4028c) {
      return "VFW_S_DVD_CHANNEL_CONTENTS_NOT_AVAILABLE";
    }
    if (param_1 < 0x40259) {
      if (param_1 == 0x40258) {
        return "VFW_S_AUDIO_NOT_RENDERED";
      }
      if (param_1 < 0x40247) {
        if (param_1 == 0x40246) {
          return "VFW_S_CONNECTIONS_DEFERRED";
        }
        if (param_1 == 0x4022d) {
          return "VFW_S_DUPLICATE_NAME";
        }
        if (param_1 == 0x40237) {
          return "VFW_S_STATE_INTERMEDIATE";
        }
        if (param_1 == 0x40242) {
          return "VFW_S_PARTIAL_RENDER";
        }
        if (param_1 == 0x40245) {
          return "VFW_S_SOME_DATA_IGNORED";
        }
      }
      else {
        if (param_1 == 0x40250) {
          return "VFW_S_RESOURCE_NOT_NEEDED";
        }
        if (param_1 == 0x40254) {
          return "VFW_S_MEDIA_TYPE_IGNORED";
        }
        if (param_1 == 0x40257) {
          return "VFW_S_VIDEO_NOT_RENDERED";
        }
      }
    }
    else if (param_1 < 0x40269) {
      if (param_1 == 0x40268) {
        return "VFW_S_CANT_CUE";
      }
      if (param_1 == 0x4025a) {
        return "VFW_S_RPZA";
      }
      if (param_1 == 0x40260) {
        return "VFW_S_ESTIMATED";
      }
      if (param_1 == 0x40263) {
        return "VFW_S_RESERVED";
      }
      if (param_1 == 0x40267) {
        return "VFW_S_STREAM_OFF";
      }
    }
    else {
      if (param_1 == 0x40270) {
        return "VFW_S_NO_STOP_TIME";
      }
      if (param_1 == 0x4027e) {
        return "VFW_S_NOPREVIEWPIN";
      }
      if (param_1 == 0x40280) {
        return "VFW_S_DVD_NON_ONE_SEQUENTIAL";
      }
    }
  }
  else if (param_1 < 0x8781202) {
    if (param_1 == 0x8781201) {
      return "DMUS_S_FREE";
    }
    if (param_1 < 0x878000b) {
      if (param_1 == 0x878000a) {
        return "DS_NO_VIRTUALIZATION";
      }
      if (param_1 == 0x4028d) {
        return "VFW_S_DVD_NOT_ACCURATE";
      }
      if (param_1 == 0x150005) {
        return "DV_FULLDUPLEX";
      }
      if (param_1 == 0x15000a) {
        return "DV_HALFDUPLEX";
      }
      if (param_1 == 0x150010) {
        return "DV_PENDING";
      }
    }
    else {
      if (param_1 == 0x8781091) {
        return "DMUS_S_PARTIALLOAD";
      }
      if (param_1 == 0x8781092) {
        return "DMUS_S_PARTIALDOWNLOAD";
      }
      if (param_1 == 0x8781200) {
        return "DMUS_S_REQUEUE";
      }
    }
  }
  else if (param_1 < 0x8781214) {
    if (param_1 == 0x8781213) {
      return "DMUS_S_UP_OCTAVE";
    }
    if (param_1 == 0x8781202) {
      return "DMUS_S_END";
    }
    if (param_1 == 0x8781210) {
      return "DMUS_S_STRING_TRUNCATED";
    }
    if (param_1 == 0x8781211) {
      return "DMUS_S_LAST_TOOL";
    }
    if (param_1 == 0x8781212) {
      return "DMUS_S_OVER_CHORD";
    }
  }
  else {
    if (param_1 == 0x8781214) {
      return "DMUS_S_DOWN_OCTAVE";
    }
    if (param_1 == 0x8781215) {
      return "DMUS_S_NOBUFFERCONTROL";
    }
    if (param_1 == 0x8781216) {
      return "DMUS_S_GARBAGE_COLLECTED";
    }
  }
  return "Unknown";
}

