// ============================================================
// 函数名称: sub_42bf7c
// 虚拟地址: 0x42bf7c
// WARP GUID: ec69655f-a795-5ebf-95a1-48f519f08ff2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowRect
// [内部子函数调用]: sub_402b4c, sub_4318d0, sub_42b71c, sub_42b708
// [被调用的父级函数]: 无
// ============================================================

void* __fastcallsub_42bf7c(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2[1] == 0 || *(arg2[1] + 0x17c) == 0)
    if (arg2[1] == 0 || *(arg2[1] + 0x17c) == 0)
        int32_t eax_3 = sub_42b71c(arg2[0xe])
        int32_t eax_5 = sub_42b708(arg2[0xe])
        double var_24_1 = fconvert.d(float.t(arg2[3]) - float.t(eax_3) * fconvert.t(*(arg2 + 0x20)))
        double var_1c_1 = fconvert.d(float.t(arg2[4]) - float.t(eax_5) * fconvert.t(*(arg2 + 0x28)))
        arg2[0x11] = sub_402b4c(fconvert.t(var_24_1))
        arg2[0x12] = sub_402b4c(fconvert.t(var_1c_1))
        arg2[0x13] = eax_3 + arg2[0x11]
        arg2[0x14] = eax_5 + arg2[0x12]
        return (*(*arg2 + 0x28))(var_24_1, var_1c_1, eax_5)
    
    GetWindowRect(sub_4318d0(arg2[1]), &arg2[0x11])
    void* result = arg2[1]
    
    if (*(result + 0x17c) == 0 || *(result + 0x148) == 0)
        return result
    
    int32_t edx_1
    edx_1.b = arg2[0x15].b
    arg2[0x16]
    arg2[0xe]
    return (*(**(result + 0x148) + 0x24))(&arg2[0x11], edx_1)
}
