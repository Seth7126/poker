// ============================================================
// 函数名称: sub_403898
// 虚拟地址: 0x403898
// WARP GUID: 6da2c377-0593-5a54-be0f-b655292bf4cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406c44, sub_403500, sub_4030d0
// [被调用的父级函数]: sub_415908, sub_4b0322, sub_46ea8b, sub_41bc20, sub_4ab20c, sub_4462c8, sub_51486d, sub_41be36, sub_414072, sub_4ab06a, sub_49c303, sub_51017e, sub_4428ca, sub_48f5f8, sub_413ee8, sub_41f874, sub_498818, sub_495c42, sub_41d812, sub_50fa27, sub_448cc1, sub_41697a, sub_41eb67, sub_416b42, sub_426761, sub_4e6659, sub_41e3af, sub_495b3f, sub_4ad5c0, sub_43d917, sub_49707f, sub_445f30, sub_428fa4, sub_4a95da, sub_42f06d, sub_41f4d3, sub_453e0a, sub_4962c3, sub_51423e, sub_41dd08, sub_4a7e8d, sub_4147ca, sub_413da3, sub_44293e, sub_41f7be, sub_414fde, sub_416c12, sub_51a748, sub_416838, sub_413e43, sub_4168a0, sub_447d2e, sub_445b91, sub_41efb4, sub_4cbdd2, sub_416918, sub_4aac3c, sub_4ac5c8
// ============================================================

int32_tsub_403898(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = sub_406c44()
    int32_t* eax_1 = sub_406c44()
    int32_t* edx = *eax_1
    *eax_1 = *edx
    sub_4030d0(edx[2])
    int32_t ecx_1 = *arg1
    TEB* fsbase
    fsbase->NtTib.ExceptionList = ecx_1
    int32_t result = arg1[1]
    arg1[2]
    sub_403500(ecx_1, __return_addr)
    return result
}
