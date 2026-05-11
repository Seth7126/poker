// ============================================================
// 函数名称: sub_4042c0
// 虚拟地址: 0x4042c0
// WARP GUID: 8f283144-b506-5d8e-a420-52e64afdbc52
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4043ac, sub_404248, sub_402980
// [被调用的父级函数]: sub_52b63c, sub_4692db, sub_4e63cc, sub_4fc3f8, sub_47af7c, sub_50f39c, sub_43c480, sub_49e7f3, sub_4b44d0, sub_477bff, sub_4ecdcc, sub_519df0, sub_52b7f8, sub_4fb834, sub_49e7fc, sub_43c26c, sub_484e24, sub_4670a8, sub_4692e4, sub_51d764, sub_451e20, sub_51974c, sub_4e649b, sub_47ab08, sub_4e6659, sub_43e1f8, sub_477c08, sub_4672f4, sub_49cb30, sub_4ed284, sub_52b8e8, sub_48c290, sub_41316c, sub_4d8208, sub_497fb4, sub_4d7108, sub_4746a0, sub_43945c, sub_5207dc, sub_479f44, sub_4ad140, sub_488509, sub_47b0c8, sub_51d840
// ============================================================

void* __convention("regparm")sub_4042c0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi = arg3
    int32_t edi = arg3
    void* result = sub_404248(arg1)
    void* edx = *arg1
    
    if (edx != 0)
        int32_t ecx = *(edx - 4)
        
        if (arg2 s>= 1 && arg2 - 1 s< ecx && edi s> 0)
            int32_t ecx_1 = ecx - (arg2 - 1)
            
            if (edi s> ecx_1)
                edi = ecx_1
            
            void* edx_1 = edx + arg2 - 1
            sub_402980(edx_1 + edi, edx_1, ecx_1 - edi)
            return sub_4043ac(arg1, *(*arg1 - 4) - edi)
    
    return result
}
