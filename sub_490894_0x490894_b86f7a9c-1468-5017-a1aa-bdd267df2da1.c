// ============================================================
// 函数名称: sub_490894
// 虚拟地址: 0x490894
// WARP GUID: b86f7a9c-1468-5017-a1aa-bdd267df2da1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_490ef8
// ============================================================

uint32_t __fastcallsub_490894(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void var_1c
    void var_1c
    int16_t* esi_1
    int16_t* edi
    edi, esi_1 = __builtin_memcpy(&var_1c, arg2, 0x10)
    *edi = *esi_1
    int16_t var_1a
    arg1[1] = zx.d(var_1a)
    int32_t var_18
    *arg1 = var_18
    int16_t result_1
    uint32_t result = zx.d(result_1)
    arg1[2] = result
    return result
}
