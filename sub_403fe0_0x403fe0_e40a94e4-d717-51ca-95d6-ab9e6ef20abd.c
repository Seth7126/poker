// ============================================================
// 函数名称: sub_403fe0
// 虚拟地址: 0x403fe0
// WARP GUID: e40a94e4-d717-51ca-95d6-ab9e6ef20abd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403f10
// [被调用的父级函数]: sub_4097ab
// ============================================================

int32_t __fastcallsub_403fe0(int32_t arg1, int16_t* arg2)
{
    // 第一条实际指令: uint32_t ecx_2 = 0
    uint32_t ecx_2 = 0
    
    if (arg2 != 0)
        int16_t* var_4_1 = arg2
        
        while (0 != *arg2)
            if (0 != arg2[1])
                if (0 != arg2[2])
                    if (0 == arg2[3])
                        arg2 = &arg2[1]
                    else
                        arg2 = &arg2[4]
                        continue
                
                arg2 = &arg2[1]
            
            arg2 = &arg2[1]
            break
        
        int16_t* ecx = arg2
        arg2 = var_4_1
        ecx_2 = (ecx - arg2) u>> 1
    
    int32_t* eax
    return sub_403f10(eax, arg2, ecx_2) __tailcall
}
