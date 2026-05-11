// ============================================================
// 函数名称: sub_49adb4
// 虚拟地址: 0x49adb4
// WARP GUID: 76c19a6c-2e01-5d2f-8645-87221d0f480f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49ae68
// [被调用的父级函数]: sub_4a3cb0, sub_4a9580, sub_49ada4, sub_4a76d4, sub_4a3fb8, sub_4a80d4
// ============================================================

int32_t __fastcallsub_49adb4(int32_t* arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg2 == 0xffffffff)
        arg3[1] = (*(*arg3 + 0x6c))()
        
        if (arg4 s< 0)
        label_49aded:
            sub_49ae68(arg3, arg3[1])
            noreturn
        
        int32_t edx_3 = arg4 + 1
        int32_t* eax_2 = arg1
        
        while (arg3[1] != *eax_2)
            eax_2 = &eax_2[1]
            int32_t temp2_1 = edx_3
            edx_3 -= 1
            
            if (temp2_1 == 1)
                goto label_49aded
        
        result.b = 1
    
    return result
}
