// ============================================================
// 函数名称: sub_404280
// 虚拟地址: 0x404280
// WARP GUID: 74386711-0ae9-5a2b-8745-b2b80f8323f4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ee0, sub_403df8
// [被调用的父级函数]: sub_4092cc, sub_49e7f3, sub_4b44d0, sub_409294, sub_49ee10, sub_51d170, sub_4fb834, sub_49d4fc, sub_51d764, sub_4b0fd8, sub_51038c, sub_508414, sub_4e649b, sub_473938, sub_475d3c, sub_51a454, sub_40a384, sub_4ad8c0, sub_514468, sub_50c2d0, sub_4e63cc, sub_4fc3f8, sub_43c480, sub_411b8c, sub_519df0, sub_408b34, sub_52c7c8, sub_50dbd4, sub_41464c, sub_484e24, sub_47ab08, sub_477c08, sub_48be98, sub_4c62e8, sub_40a218, sub_4ec448, sub_52b8e8, sub_48c290, sub_497fb4, sub_40c688, sub_4d7108, sub_49dcc4, sub_5207dc, sub_408b84, sub_4d954c, sub_43c320, sub_4807f4, sub_477bff, sub_4cca24, sub_4ed4d4, sub_49f478, sub_49e7fc, sub_408bb8, sub_4dbf70, sub_49e3f8, sub_4a5d10, sub_471144, sub_4d951f, sub_409200, sub_4afa30, sub_51974c, sub_4d9378, sub_4e6659, sub_49cb30, sub_40aff4, sub_4ed638, sub_411a80, sub_47b0c8, sub_49e7c0, sub_4692db, sub_47af7c, sub_50a360, sub_46fed4, sub_4ecdcc, sub_428bd4, sub_52b7f8, sub_4a8988, sub_4e6028, sub_52ba68, sub_49dbf0, sub_49f548, sub_50af4c, sub_4692e4, sub_519804, sub_49de5c, sub_451e20, sub_5197fb, sub_428b90, sub_50b1ac, sub_4e5e3c, sub_49df54, sub_4d8208, sub_4a0e13, sub_488509, sub_4fc834, sub_51d840
// ============================================================

char** __fastcallsub_404280(void* arg1, int32_t arg2, void* arg3 @ eax, char** arg4)
{
    // 第一条实际指令: char** result
    char** result
    
    if (arg3 == 0)
        result = arg4
        sub_403df8(result)
    else
        int32_t ebx_1 = *(arg3 - 4)
        
        if (ebx_1 == 0)
            result = arg4
            sub_403df8(result)
        else
            void* const edx = arg2 - 1
            
            if (arg2 s< 1)
                edx = nullptr
            label_404293:
                void* ebx_2 = ebx_1 - edx
                
                if (arg1 s< 0)
                    result = arg4
                    sub_403df8(result)
                else
                    if (arg1 s> ebx_2)
                        arg1 = ebx_2
                    
                    result = arg4
                    sub_403ee0(result, edx + arg3, arg1)
            else
                if (edx s< ebx_1)
                    goto label_404293
                
                result = arg4
                sub_403df8(result)
    
    return result
}
