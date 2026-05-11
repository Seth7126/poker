// ============================================================
// 函数名称: sub_41276c
// 虚拟地址: 0x41276c
// WARP GUID: bd75613e-5f2c-5471-8472-fcb976918518
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4124cc, sub_41276c
// [被调用的父级函数]: sub_412870, sub_41276c
// ============================================================

int32_t* __fastcallsub_41276c(uint32_t arg1, uint32_t arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: uint32_t var_c = arg2
    uint32_t var_c = arg2
    int32_t* result
    uint32_t ebx_1
    
    do
        ebx_1 = var_c
        uint32_t esi_1 = arg1
        uint32_t var_14_1 = (var_c + arg1) u>> 1
        
        while (true)
            if (arg4() s< 0)
                ebx_1 += 1
            else
                while (true)
                    result = arg4()
                    
                    if (result s<= 0)
                        break
                    
                    esi_1 -= 1
                
                if (esi_1 s>= ebx_1)
                    result = sub_4124cc(arg3, ebx_1, esi_1)
                    
                    if (ebx_1 == var_14_1)
                        var_14_1 = esi_1
                    else if (esi_1 == var_14_1)
                        var_14_1 = ebx_1
                    
                    ebx_1 += 1
                    esi_1 -= 1
                
                if (esi_1 s< ebx_1)
                    break
        
        if (esi_1 s> var_c)
            result = sub_41276c(arg4)
        
        var_c = ebx_1
    while (ebx_1 s< arg1)
    return result
}
