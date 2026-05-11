// ============================================================
// 函数名称: sub_410070
// 虚拟地址: 0x410070
// WARP GUID: 6c59e991-d40c-51f4-a754-d4b844bc496a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c
// [被调用的父级函数]: sub_428b63, sub_418633, sub_41843c
// ============================================================

int32_t __fastcallsub_410070(int32_t* arg1, char** arg2, int32_t arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: char var_9
    char var_9
    
    if (arg4 s< 0)
    label_4100a3:
        var_9 = 0
    else
        int32_t esi_1 = arg4 + 1
        int32_t* ebx_1 = arg1
        
        while (arg3 != *ebx_1)
            ebx_1 = &ebx_1[2]
            int32_t temp1_1 = esi_1
            esi_1 -= 1
            
            if (temp1_1 == 1)
                goto label_4100a3
        
        var_9 = 1
        sub_403e4c(arg2, ebx_1[1])
    
    arg3.b = var_9
    return arg3
}
